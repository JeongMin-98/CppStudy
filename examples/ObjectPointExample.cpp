//
// Created by jeong on 2023-10-24.
//
#include <iostream>
#include "Drive/drive.hpp"

using namespace std;

int main() {
    xycar::drive miniCars[3] = {xycar::drive(1, 1), xycar::drive(0, 5), xycar::drive(0, -5)};
//    xycar::drive mini;
//    xycar::drive *p;
//
//    p = &mini;
//    int pSpeed = mini.getSpeed();
//    cout << "점 연산자 사용 " << pSpeed << endl;
//    pSpeed = p->getSpeed();
//    cout << "-> 연산자 사용 " << pSpeed << endl;

    for (int i = 0; i < 3; i++) {
        cout << i << "번째 : ";
        miniCars[i].checkStatus();
    }


    return 0;

}

