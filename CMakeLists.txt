cmake_minimum_required(VERSION 3.10)


set(CppStudy_PROJECT_NAME CppStudy)
set(SOURCE_DIR src)
set(SOURCE ${SOURCE_DIR}/main.cpp)
#file(GLOB SOURCES ./src/*.cpp)
set(LIBRARIES_DIR libs)
set(LIBRARIES
    NameSpace
    Foo
    Drive
    Exp
    )

project(
    ${CppStudy_PROJECT_NAME}
    VERSION 1.0.0
    DESCRIPTION "to study For CPP and Cmake Project"
    #        HOMEPAGE_URL https://github.com/JeongMin-98/CppStudy
    LANGUAGES CXX
)

add_executable(${CppStudy_PROJECT_NAME} ${SOURCE})

# LIBRARY
foreach (LIBRARY ${LIBRARIES})
    add_subdirectory("${LIBRARIES_DIR}/${LIBRARY}")
endforeach (LIBRARY)
target_link_libraries(${PROJECT_NAME} ${LIBRARIES})

# Examples
file(GLOB EXAMPLE_HEADER_FILES "examples/*.hpp")
file(GLOB EXAMPLE_INLINE_FILES "examples/*.inl")
file(GLOB EXAMPLE_SOURCE_FILES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/examples" "examples/*.cpp")
foreach (EXAMPLE_SOURCE_FILE ${EXAMPLE_SOURCE_FILES})
    string(REGEX REPLACE "(.*)\\.cpp" "\\1" EXAMPLE_NAME ${EXAMPLE_SOURCE_FILE})
    set(EXAMPLE_TARGET "cppstudy-example-${EXAMPLE_NAME}")
    add_executable(${EXAMPLE_TARGET} ${EXAMPLE_HEADER_FILES} ${EXAMPLE_INLINE_FILES} "examples/${EXAMPLE_SOURCE_FILE}")
    set_target_properties(${EXAMPLE_TARGET} PROPERTIES COMPILE_FLAGS "${PEDANTIC_COMPILE_FLAGS}" FOLDER "examples")
    target_link_libraries(${EXAMPLE_TARGET} ${LIBRARIES})
    list(APPEND INSTALL_TARGETS ${EXAMPLE_TARGET})
    list(APPEND INSTALL_TARGETS_PDB ${EXAMPLE_TARGET})
endforeach ()

