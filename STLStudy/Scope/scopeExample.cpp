//
// Created by jeong on 2023-07-26.
//

int x = 10; // 전역 스코프

int main() {

    for (int i = 0; i < x; ++i) // i는 for문 블럭 스코프를 가진다.
    {
        static int i = 1;
        // static => 블럭 안에서 존재하고 접근이 가능하다. 그렇지만 메모리는 전역 변수가 된다.
        // 스택 공간이 아니라 data 공간에 저장이된다.

    } // i가 소멸
    int i = 5; // 상위 블럭의 i를 가린다.
}