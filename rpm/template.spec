%bcond_without tests
%bcond_without weak_deps

%global __os_install_post %(echo '%{__os_install_post}' | sed -e 's!/usr/lib[^[:space:]]*/brp-python-bytecompile[[:space:]].*$!!g')
%global __provides_exclude_from ^/opt/ros/iron/.*$
%global __requires_exclude_from ^/opt/ros/iron/.*$

Name:           ros-iron-etsi-its-cam-conversion
Version:        2.0.2
Release:        1%{?dist}%{?release_suffix}
Summary:        ROS etsi_its_cam_conversion package

License:        MIT
Source0:        %{name}-%{version}.tar.gz

Requires:       ros-iron-etsi-its-cam-coding
Requires:       ros-iron-etsi-its-cam-msgs
Requires:       ros-iron-etsi-its-primitives-conversion
Requires:       ros-iron-ros-environment
Requires:       ros-iron-ros-workspace
BuildRequires:  ros-iron-ament-cmake
BuildRequires:  ros-iron-etsi-its-cam-coding
BuildRequires:  ros-iron-etsi-its-cam-msgs
BuildRequires:  ros-iron-etsi-its-primitives-conversion
BuildRequires:  ros-iron-ros-environment
BuildRequires:  ros-iron-ros-workspace
Provides:       %{name}-devel = %{version}-%{release}
Provides:       %{name}-doc = %{version}-%{release}
Provides:       %{name}-runtime = %{version}-%{release}

%description
Conversion functions for converting ROS messages to and from ASN.1-encoded ETSI
ITS CAMs

%prep
%autosetup -p1

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/iron/setup.sh" ]; then . "/opt/ros/iron/setup.sh"; fi
mkdir -p .obj-%{_target_platform} && cd .obj-%{_target_platform}
%cmake3 \
    -UINCLUDE_INSTALL_DIR \
    -ULIB_INSTALL_DIR \
    -USYSCONF_INSTALL_DIR \
    -USHARE_INSTALL_PREFIX \
    -ULIB_SUFFIX \
    -DCMAKE_INSTALL_PREFIX="/opt/ros/iron" \
    -DAMENT_PREFIX_PATH="/opt/ros/iron" \
    -DCMAKE_PREFIX_PATH="/opt/ros/iron" \
    -DSETUPTOOLS_DEB_LAYOUT=OFF \
%if !0%{?with_tests}
    -DBUILD_TESTING=OFF \
%endif
    ..

%make_build

%install
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/iron/setup.sh" ]; then . "/opt/ros/iron/setup.sh"; fi
%make_install -C .obj-%{_target_platform}

%if 0%{?with_tests}
%check
# Look for a Makefile target with a name indicating that it runs tests
TEST_TARGET=$(%__make -qp -C .obj-%{_target_platform} | sed "s/^\(test\|check\):.*/\\1/;t f;d;:f;q0")
if [ -n "$TEST_TARGET" ]; then
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/iron/setup.sh" ]; then . "/opt/ros/iron/setup.sh"; fi
CTEST_OUTPUT_ON_FAILURE=1 \
    %make_build -C .obj-%{_target_platform} $TEST_TARGET || echo "RPM TESTS FAILED"
else echo "RPM TESTS SKIPPED"; fi
%endif

%files
/opt/ros/iron

%changelog
* Mon Jun 03 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.2-1
- Autogenerated by Bloom

* Tue Feb 27 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.1-1
- Autogenerated by Bloom

* Fri Jan 05 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.0-1
- Autogenerated by Bloom

* Mon Dec 04 2023 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 1.0.0-2
- Autogenerated by Bloom

* Fri Nov 24 2023 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 1.0.0-1
- Autogenerated by Bloom

