//
// Created by jeong on 2023-07-27.
//

#include <functional>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

template<typename T>
void print_queue(T q) { // 출력을 위해 pop을 하므로 값 전달하여 복제
    while (!q.empty()) {
        cout << q.top() << ' ';
        q.pop();
    }
    cout << '\n';
}

int main() {
    const auto data = { 1,8,5,6,3,4,0,9,7,2 };

    priority_queue<int> pq1; // 최대 힙
    for (int n : data)
        pq1.push(n);
    print_queue(pq1);

    priority_queue<int, vector<int>, std::greater<int>> pq2(data.begin(), data.end()); //최소 힙
    print_queue(pq2);

    auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq3(cmp); //클로져의 타입을 알기 위해 decltype 사용
    for (int n : data)
        pq3.push(n);
    print_queue(pq3);
}