%bcond_without tests
%bcond_without weak_deps

%global __os_install_post %(echo '%{__os_install_post}' | sed -e 's!/usr/lib[^[:space:]]*/brp-python-bytecompile[[:space:]].*$!!g')
%global __provides_exclude_from ^/opt/ros/jazzy/.*$
%global __requires_exclude_from ^/opt/ros/jazzy/.*$

Name:           ros-jazzy-etsi-its-cam-msgs
Version:        3.1.0
Release:        1%{?dist}%{?release_suffix}
Summary:        ROS etsi_its_cam_msgs package

License:        MIT
Source0:        %{name}-%{version}.tar.gz

Requires:       ros-jazzy-ros-environment
Requires:       ros-jazzy-rosidl-default-runtime
Requires:       ros-jazzy-std-msgs
Requires:       ros-jazzy-ros-workspace
BuildRequires:  ros-jazzy-ros-environment
BuildRequires:  ros-jazzy-rosidl-default-generators
BuildRequires:  ros-jazzy-std-msgs
BuildRequires:  ros-jazzy-ros-workspace
BuildRequires:  ros-jazzy-rosidl-typesupport-fastrtps-c
BuildRequires:  ros-jazzy-rosidl-typesupport-fastrtps-cpp
Provides:       %{name}-devel = %{version}-%{release}
Provides:       %{name}-doc = %{version}-%{release}
Provides:       %{name}-runtime = %{version}-%{release}
Provides:       ros-jazzy-rosidl-interface-packages(member)

%if 0%{?with_weak_deps}
Supplements:    ros-jazzy-rosidl-interface-packages(all)
%endif

%description
ROS messages for ETSI ITS CAM

%prep
%autosetup -p1

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/jazzy/setup.sh" ]; then . "/opt/ros/jazzy/setup.sh"; fi
mkdir -p .obj-%{_target_platform} && cd .obj-%{_target_platform}
%cmake3 \
    -UINCLUDE_INSTALL_DIR \
    -ULIB_INSTALL_DIR \
    -USYSCONF_INSTALL_DIR \
    -USHARE_INSTALL_PREFIX \
    -ULIB_SUFFIX \
    -DCMAKE_INSTALL_PREFIX="/opt/ros/jazzy" \
    -DAMENT_PREFIX_PATH="/opt/ros/jazzy" \
    -DCMAKE_PREFIX_PATH="/opt/ros/jazzy" \
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
if [ -f "/opt/ros/jazzy/setup.sh" ]; then . "/opt/ros/jazzy/setup.sh"; fi
%make_install -C .obj-%{_target_platform}

%if 0%{?with_tests}
%check
# Look for a Makefile target with a name indicating that it runs tests
TEST_TARGET=$(%__make -qp -C .obj-%{_target_platform} | sed "s/^\(test\|check\):.*/\\1/;t f;d;:f;q0")
if [ -n "$TEST_TARGET" ]; then
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/jazzy/setup.sh" ]; then . "/opt/ros/jazzy/setup.sh"; fi
CTEST_OUTPUT_ON_FAILURE=1 \
    %make_build -C .obj-%{_target_platform} $TEST_TARGET || echo "RPM TESTS FAILED"
else echo "RPM TESTS SKIPPED"; fi
%endif

%files
/opt/ros/jazzy

%changelog
* Mon Feb 17 2025 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 3.1.0-1
- Autogenerated by Bloom

* Tue Dec 10 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 3.0.0-1
- Autogenerated by Bloom

* Tue Nov 19 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.4.0-1
- Autogenerated by Bloom

* Tue Oct 15 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.3.0-1
- Autogenerated by Bloom

* Thu Aug 01 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.2.0-1
- Autogenerated by Bloom

* Tue Jul 09 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.1.0-1
- Autogenerated by Bloom

* Mon Jun 17 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.2-2
- Autogenerated by Bloom

