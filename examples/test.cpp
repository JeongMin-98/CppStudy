//
// Created by jeong on 2023-10-18.
//
////
//// Created by jeong on 2023-07-24.
////

#include <iostream>
#include "../include/cppstudy/Drive/drive.hpp"

using namespace std;

int main() {
    xycar::drive myCar;
    xycar::drive otherCar(5, 5);

    otherCar.checkStatus();
    myCar.checkStatus();
    cout << "전진 !! " << endl;
    myCar.forward();
    myCar.checkStatus();
    cout << "후진 !!" << endl;
    myCar.backward();
    myCar.checkStatus();

    return 0;

}
