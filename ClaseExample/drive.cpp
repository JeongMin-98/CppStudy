//
// Created by jeong on 2023-10-17.
//
#include <iostream>
#include "drive.hpp"

namespace xycar {
    void drive::checkStatus() {
        std::cout << "myCar의 상태는" << std::endl;
        std::cout << "조향각 : " << angle << std::endl;
        std::cout << "속도 : " << speed << std::endl;
    }
    int drive::forward() {
        speed = 5;
        return 0;
    }

    int drive::backward() {
        speed = -5;
        return 0;
    }
}