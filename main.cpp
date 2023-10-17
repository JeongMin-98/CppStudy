////
//// Created by jeong on 2023-07-24.
////

#include <iostream>
#include "ClaseExample/drive.hpp"

using namespace std;

int main() {
    xycar::drive myCar;

    myCar.checkStatus();
    cout << "전진 !! " << endl;
    myCar.forward();
    myCar.checkStatus();
    cout << "후진 !!" << endl;
    myCar.backward();
    myCar.checkStatus();

    return 0;

}
