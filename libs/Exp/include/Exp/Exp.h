//
// Created by jeong on 2023-10-20.
//

#ifndef CPPSTUDY_EXP_H
#define CPPSTUDY_EXP_H

#endif //CPPSTUDY_EXP_H

class Exp{
private:
    int base;
    int indices;
public:
    Exp() : Exp(1, 1) {}
    Exp(int a, int b){
        base = a;
        indices = b;
        return;
    }
    Exp(int a){
        base = a;
        indices = 1;
        return;
    }

    int power(int base, int indices);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp b);
};