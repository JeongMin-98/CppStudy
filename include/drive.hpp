//
// Created by jeong on 2023-10-17.
//

#ifndef CPPSTUDY_DRIVE_HPP
#define CPPSTUDY_DRIVE_HPP

namespace xycar {

    class drive {
    private:
        int angle;
        int speed;
    public:
        drive() : drive(0, 0) {}

        drive(int a, int s) {
            angle = a;
            speed = s;
            return;
        };
        ~drive();

        void checkStatus();

        int forward();

        int backward();
    };

}


#endif //CPPSTUDY_DRIVE_HPP
