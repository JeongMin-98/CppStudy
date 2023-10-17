cmake_minimum_required(VERSION 3.10)
project(CppStudy)

set(CMAKE_CXX_STANDARD 11)

add_executable(CppStudy
    main.cpp
#    STLStudy/devtest.cpp STLStudy/float_study.cpp STLStudy/reference_study.cpp
#    STLStudy/input.cpp
#    STLStudy/MergeSort/k.cpp STLStudy/Scope/scopeExample.cpp STLStudy/Scope/classScopeExample.cpp STLStudy/MergeSort/kMento.cpp "STLStudy/MoreSpicy(Heap)/moreSpicy.cpp" "STLStudy/MoreSpicy(Heap)/priorityQueueExamples.cpp" "STLStudy/FindNumber(Set)/findNumber.cpp"
    Foo/foo.cpp NameSpace/car.cpp NameSpace/xycar.cpp
    )
