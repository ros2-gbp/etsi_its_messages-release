%bcond_without tests
%bcond_without weak_deps

%global __os_install_post %(echo '%{__os_install_post}' | sed -e 's!/usr/lib[^[:space:]]*/brp-python-bytecompile[[:space:]].*$!!g')
%global __provides_exclude_from ^/opt/ros/humble/.*$
%global __requires_exclude_from ^/opt/ros/humble/.*$

Name:           ros-humble-etsi-its-denm-msgs
Version:        3.1.0
Release:        1%{?dist}%{?release_suffix}
Summary:        ROS etsi_its_denm_msgs package

License:        MIT
Source0:        %{name}-%{version}.tar.gz

Requires:       ros-humble-ros-environment
Requires:       ros-humble-rosidl-default-runtime
Requires:       ros-humble-std-msgs
Requires:       ros-humble-ros-workspace
BuildRequires:  ros-humble-ros-environment
BuildRequires:  ros-humble-rosidl-default-generators
BuildRequires:  ros-humble-std-msgs
BuildRequires:  ros-humble-ros-workspace
BuildRequires:  ros-humble-rosidl-typesupport-fastrtps-c
BuildRequires:  ros-humble-rosidl-typesupport-fastrtps-cpp
Provides:       %{name}-devel = %{version}-%{release}
Provides:       %{name}-doc = %{version}-%{release}
Provides:       %{name}-runtime = %{version}-%{release}
Provides:       ros-humble-rosidl-interface-packages(member)

%if 0%{?with_weak_deps}
Supplements:    ros-humble-rosidl-interface-packages(all)
%endif

%description
ROS messages for ETSI ITS DENM

%prep
%autosetup -p1

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/humble/setup.sh" ]; then . "/opt/ros/humble/setup.sh"; fi
mkdir -p .obj-%{_target_platform} && cd .obj-%{_target_platform}
%cmake3 \
    -UINCLUDE_INSTALL_DIR \
    -ULIB_INSTALL_DIR \
    -USYSCONF_INSTALL_DIR \
    -USHARE_INSTALL_PREFIX \
    -ULIB_SUFFIX \
    -DCMAKE_INSTALL_PREFIX="/opt/ros/humble" \
    -DAMENT_PREFIX_PATH="/opt/ros/humble" \
    -DCMAKE_PREFIX_PATH="/opt/ros/humble" \
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
if [ -f "/opt/ros/humble/setup.sh" ]; then . "/opt/ros/humble/setup.sh"; fi
%make_install -C .obj-%{_target_platform}

%if 0%{?with_tests}
%check
# Look for a Makefile target with a name indicating that it runs tests
TEST_TARGET=$(%__make -qp -C .obj-%{_target_platform} | sed "s/^\(test\|check\):.*/\\1/;t f;d;:f;q0")
if [ -n "$TEST_TARGET" ]; then
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree and source it.  It will set things like
# CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/humble/setup.sh" ]; then . "/opt/ros/humble/setup.sh"; fi
CTEST_OUTPUT_ON_FAILURE=1 \
    %make_build -C .obj-%{_target_platform} $TEST_TARGET || echo "RPM TESTS FAILED"
else echo "RPM TESTS SKIPPED"; fi
%endif

%files
/opt/ros/humble

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

* Mon Jun 03 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.2-1
- Autogenerated by Bloom

* Tue Feb 27 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.1-1
- Autogenerated by Bloom

* Fri Jan 05 2024 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 2.0.0-1
- Autogenerated by Bloom

* Wed Nov 29 2023 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 1.0.0-2
- Autogenerated by Bloom

* Fri Nov 24 2023 Jean-Pierre Busch <jean-pierre.busch@rwth-aachen.de> - 1.0.0-1
- Autogenerated by Bloom

