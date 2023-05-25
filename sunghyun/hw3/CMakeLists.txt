cmake_minimum_required(VERSION 3.25)
project(hw3)

set(CMAKE_CXX_STANDARD 14)

include_directories(control/include)
include_directories(entity/include)
include_directories(interface/include)

add_executable(hw3
        control/include/control_delete_user.h
        control/include/control_login.h
        control/include/control_logout.h
        control/include/control_signup.h
        control/control_delete_user.cpp
        control/control_login.cpp
        control/control_logout.cpp
        control/control_signup.cpp
        entity/include/collection_session.h
        entity/include/collection_user.h
        entity/include/company.h
        entity/include/session.h
        entity/include/user.h
        entity/include/user_general.h
        entity/collection_session.cpp
        entity/collection_user.cpp
        entity/company.cpp
        entity/session.cpp
        entity/user.cpp
        entity/user_general.cpp
        interface/include/interface_delete_user.h
        interface/include/interface_login.h
        interface/include/interface_logout.h
        interface/include/interface_signup.h
        interface/interface_delete_user.cpp
        interface/interface_login.cpp
        interface/interface_logout.cpp
        interface/interface_signup.cpp
        main.cpp
        )
