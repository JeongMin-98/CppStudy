//
// Created by jeong on 2023-10-17.
//

#include "car.hpp"
#include "xycar.hpp"

namespace car{
    int foo() { return 3;}
    int motor(){
        return xycar::motor();
    }
}