cmake_minimum_required(VERSION 3.10)
project(
        CppStudy
        VERSION 1.0.0
        DESCRIPTION "I make to study For CPP and Cmake Project"
#        HOMEPAGE_URL https://github.com/JeongMin-98/CppStudy
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)
add_subdirectory(examples)

set(LIBRARIES ClassExample Foo NameSpace)

foreach (LIBRARY ${LIBRARIES})
    set(LIB_OBJS ${LIB_OBJS} $<TARGET_OBJECTS:${LIBRARY}>)
endforeach ()

add_library(${PROJECT_NAME} STATIC ${LIB_OBJS})
#add_executable(CppStudy
#        main.cpp
#        #    STLStudy/devtest.cpp STLStudy/float_study.cpp STLStudy/reference_study.cpp
#        #    STLStudy/input.cpp
#        #    STLStudy/MergeSort/k.cpp STLStudy/Scope/scopeExample.cpp STLStudy/Scope/classScopeExample.cpp STLStudy/MergeSort/kMento.cpp "STLStudy/MoreSpicy(Heap)/moreSpicy.cpp" "STLStudy/MoreSpicy(Heap)/priorityQueueExamples.cpp" "STLStudy/FindNumber(Set)/findNumber.cpp"
#        src/Foo/foo.cpp src/NameSpace/car.cpp src/NameSpace/xycar.cpp
#        src/ClassExample/drive.cpp
#        examples/test.cpp)
