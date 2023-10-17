//
// Created by jeong on 2023-07-24.
//
#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 1, y = 2;
    std::cout << x << y << std:: endl;
    swap(x, y);
    std::cout << x << y << std:: endl;

    return 1;
}