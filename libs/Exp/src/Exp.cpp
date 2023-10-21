//
// Created by jeong on 2023-10-20.
//
#include "Exp.h"
int Exp::power(int base, int indices){
    if (indices == 0) return 1;
    else if ((indices % 2) == 0)
        return power(base * base, indices / 2);
    else return base * power(base * base, (indices - 1) / 2);
}
int Exp::getValue() {
    int retValue = 1;
    retValue = power(base, indices);
    return retValue;
}

int Exp::getBase(){
    return base;
}

int Exp::getExp(){
    return indices;
}

bool Exp::equals(Exp b){
    int value, bValue;
    value = getValue();
    bValue = b.getValue();

    if (value == bValue) return true;
    else return false;
}