//
// Created by jeong on 2023-07-25.
//

// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

// 2, 9, 5

// 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 2번연산 횟수 1번
// 3, 4, 5, 6, 7, 8, 9, 10, 1   3번 연산 횟수 3번
// 1, 3, 4, 5, 6, 7, 8, 9, 10
// 10, 1, 3, 4, 5, 6, 7, 8, 9
// 9, 10, 1, 3, 4, 5, 6, 7, 8  9번 추출
// 10, 1, 3, ,4, 5, 6, 7, 8 3번연산 횟수 4번
// 8, 10, 1, 3, 4, 5, 6, 7
// 7, 8, 10, 1, 3, 4, 5, 6
// 6, 7, 8, 10, 1, 3, 4, 5
// 5, 6, 7, 8, 10, 1, 3, 4, 5

#include <list>
#include <array>
#include <iostream>

std::list<int> rightRotateQueue(std::list<int> &queue, int &rotate, std::list<int>::iterator &top) {

    int v = 0;

    while (rotate > 0) {
        v = queue.back();
        queue.pop_back();
        queue.push_front(v);
        rotate--;
    }

    top = queue.begin();
    return queue;
}

std::list<int> leftRotateQueue(std::list<int> &queue, int &rotate, std::list<int>::iterator &top) {

    int r = 0;

    while (rotate > 0) {
        r = queue.front();
        queue.pop_front();
        queue.push_back(r);
        rotate--;
    }

    top = queue.begin();
    return queue;
}

// extract => pop_front()
// cur = L.erase(cur);
int main() {

    int M, N;
    int *arr = new int[N];
    std::cin >> M >> N;
    for (int i = 0; i < N; i++)
        std::cin >> arr[i];
    std::list<int> rotateQueue;
    for (int i = 1; i <= M; i++) {
        rotateQueue.push_back(i);
    }
    std::list<int>::iterator cur = rotateQueue.begin();
    std::list<int>::iterator front_cur;
    std::list<int>::reverse_iterator back_cur;


    int leftRotateCount = 0;
    int rightRotateCount = 0;
    int count = 0;
    int total = 0;

    for (int i = 0; i < N; i++) {
        count = 0;
        leftRotateCount = 0;
        rightRotateCount = 0;

        if (arr[i] == *cur) {
            std::cout << "find num : " << arr[i] << " " << *cur << std::endl;
            cur = rotateQueue.erase(cur);
            total += count;

        } else {
            back_cur = rotateQueue.rbegin();
            front_cur = rotateQueue.begin();

            // 둘 중 하나가 원소를 찾을 경우
            while (*front_cur != arr[i] && *back_cur != arr[i]) {
                front_cur++;
                leftRotateCount++;
                back_cur++;
                rightRotateCount++;
            }
            std::cout << "rotate [" << i << "]" << std::endl;
            std::cout << "find num " << arr[i] << std::endl;
            std::cout << "front_cur and back_cur " << std::endl;
            std::cout << *front_cur << " " << *back_cur << std::endl;
            std::cout << "left_rotate and right_rotate" << std::endl;
            std::cout << leftRotateCount << " " << rightRotateCount << std::endl;
            if (*front_cur == arr[i] && *back_cur == arr[i]) {
                count = leftRotateCount;
                leftRotateQueue(rotateQueue, leftRotateCount, cur);
            } else if (*front_cur != arr[i] && *back_cur == arr[i]) {
                count = ++rightRotateCount;
                rightRotateQueue(rotateQueue, rightRotateCount, cur);
            } else if (*front_cur == arr[i] && *back_cur != arr[i]) {
                count = leftRotateCount;
                leftRotateQueue(rotateQueue, leftRotateCount, cur);
            }

            if (*cur == arr[i]) {
//                std::cout << "find num : " << arr[i] << " " << *cur << std::endl;
                cur = rotateQueue.erase(cur);
                total += count;
            }

        }
    }

//    std::cout << "total: " << total << std::endl;
    std::cout << total;

    return 0;

}