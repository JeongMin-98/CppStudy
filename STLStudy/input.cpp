//
// Created by jeong on 2023-07-25.
//
#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++)
        cout << arr[i];

    return 0;


}