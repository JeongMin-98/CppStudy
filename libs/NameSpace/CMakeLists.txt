cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME NameSpaceLibrary)
set(LIBRARY_NAME NameSpace)
set(LIBRARY_HEADERS_DIR
        include/${LIBRARY_NAME}
        )
set(LIBRARY_HEADERS
        ${LIBRARY_HEADERS_DIR}/car.hpp
        ${LIBRARY_HEADERS_DIR}/xycar.hpp
        )
set(LIBRARY_SOURCE_DIR
        src
        )
set(LIBRARY_SOURCE
        ${LIBRARY_SOURCE_DIR}/car.cpp
        ${LIBRARY_SOURCE_DIR}/xycar.cpp
        )

project(${PROJECT_NAME})

add_library(${LIBRARY_NAME} STATIC
        ${LIBRARY_HEADERS}
        ${LIBRARY_SOURCE}
        )

target_include_directories(${LIBRARY_NAME} PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/${LIBRARY_NAME}>
        $<INSTALL_INTERFACE:include/${LIBRARY_NAME}>
        )

target_include_directories(${LIBRARY_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        )
