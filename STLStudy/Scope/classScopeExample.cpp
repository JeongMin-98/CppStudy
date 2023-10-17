//
// Created by jeong on 2023-07-26.
//
#include <vector>

using namespace std;

struct B
{
//    B() = delete; // delete default constructor
    B(int x){

    }
};



class A {
public:
    static int sCnt;
    B b;
    vector<int>& v;
    int id;
    A(int x) : b{
        // recommend to initialize constructor scope
        // Case : Have to Initialize value in constructor
    }

    void updateId() {
        id = sCnt++;
    }

    static void resetCnt() {
        sCnt = 0;
    }
};

int A::sCnt = 0;

int main() {

}