cmake_minimum_required(VERSION 3.10)


set(CppStudy_PROJECT_NAME CppStudy)
set(SOURCE_DIR src)
set(SOURCE ${SOURCE_DIR}/main.cpp)
set(LIBRARIES_DIR libs)
set(LIBRARIES
        NameSpace
        Foo
        Drive
        )

project(
        ${CppStudy_PROJECT_NAME}
        VERSION 1.0.0
        DESCRIPTION "to study For CPP and Cmake Project"
        #        HOMEPAGE_URL https://github.com/JeongMin-98/CppStudy
        LANGUAGES CXX
)

add_executable(${CppStudy_PROJECT_NAME} ${SOURCE})

foreach (LIBRARY ${LIBRARIES})
    add_subdirectory("${LIBRARIES_DIR}/${LIBRARY}")
endforeach (LIBRARY)

target_link_libraries(${PROJECT_NAME} ${LIBRARIES})