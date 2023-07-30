//
// Created by jeong on 2023-07-27.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> heapq(scoville.begin(), scoville.end());


    while (heapq.size() > 1) {
        auto lowestScoville = heapq.top();
        if (lowestScoville >= K)
            return answer;
        heapq.pop();
        auto newFood = lowestScoville + heapq.top() * 2;
        heapq.pop();
        heapq.push(newFood);
        answer++;
    }

    // remain 1 value
    if (heapq.top() >= K)
        return answer;
    else
        return -1;
}

int main() {
    int result;
    result = solution({1, 2, 3, 9, 10, 12}, 7);
    cout << result;
}