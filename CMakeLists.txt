cmake_minimum_required(VERSION 3.10)
project(CppStudy)

set(CMAKE_CXX_STANDARD 11)

add_executable(CppStudy
    main.cpp
    devtest.cpp float_study.cpp reference_study.cpp
    RotateQueue/rotateQueue.cpp input.cpp
    RotateQueue/rotateQueueOthers.cpp
    RotateQueue/rotateQueueMento.cpp
    MergeSort/k.cpp Scope/scopeExample.cpp Scope/classScopeExample.cpp MergeSort/kMento.cpp "MoreSpicy(Heap)/moreSpicy.cpp" "MoreSpicy(Heap)/priorityQueueExamples.cpp")


