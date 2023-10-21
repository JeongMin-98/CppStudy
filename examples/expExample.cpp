//
// Created by jeong on 2023-10-21.
//
#include <iostream>
using namespace std;

#include "Exp/Exp.h"

int main(){
    Exp a(3, 2);
    Exp b(9);
    Exp c;

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

    if (a.equals(b))
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    return 0;
}