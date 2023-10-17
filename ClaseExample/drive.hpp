//
// Created by jeong on 2023-10-17.
//

#ifndef CPPSTUDY_DRIVE_HPP
#define CPPSTUDY_DRIVE_HPP

namespace xycar {

    class drive {
    public:
        int angle;
        int speed;

        drive() {
            angle = 0;
            speed = 0;
        };

        void checkStatus();

        int forward();

        int backward();
    };

}


#endif //CPPSTUDY_DRIVE_HPP
