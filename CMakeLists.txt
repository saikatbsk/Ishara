# Initalization
project(ishara)

cmake_minimum_required(VERSION 2.8)

# Find required packages
find_package(Qt4 REQUIRED)
find_package(X11 REQUIRED)
find_package(OpenCV REQUIRED)

# Pkg config stuff for libraries that do not provide find modules, (XTest and OpenCV)
find_package(PkgConfig REQUIRED)

pkg_check_modules(XTest xtst)

link_directories(
    ${XTest_LIBARARY_DIRS}
)
include_directories(
    ${XTest_INCLUDE_DIRS}
)

# Required definitions
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})

# Setup source files

set ( ishara_SOURCES 
	src/main.cpp 
	src/ishara.cpp 
	src/aboutdialog.cpp
    )

set ( ishara_HEADERS 
	src/ishara.h
	src/aboutdialog.h
    )

set ( ishara_FORMS
	src/ishara.ui
	src/aboutdialog.ui
    )

set ( ishara_RESOURCES
	src/res.qrc
    )

qt4_wrap_ui(ishara_FORMS_HEADERS ${ishara_FORMS})
qt4_add_resources(ishara_RESOURCES_RCC ${ishara_RESOURCES})
qt4_wrap_cpp(ishara_HEADERS_MOC ${ishara_HEADERS})

add_executable (ishara 
	${ishara_SOURCES}
 	${ishara_HEADERS_MOC}
	${ishara_FORMS_HEADERS} 
	${ishara_RESOURCES_RCC}
    )

# Link stuffs

target_link_libraries (ishara 
	${QT_LIBRARIES}
	${X11_LIBRARIES}
	${OpenCV_LIBRARIES}
	${XTest_LIBRARIES}
    )

# Install them

install(TARGETS ishara DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
