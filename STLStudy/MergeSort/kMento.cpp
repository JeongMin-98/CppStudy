//
// Created by jeong on 2023-07-26.
//
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, v;
    answer.reserve(commands.size());
    v.reserve(array.size());
    for (auto& command : commands)
    {
        v.assign(array.begin() + command[0] - 1, array.begin() + command[1]);
        nth_element(v.begin(), v.begin() + command[2] - 1, v.end());
        answer.push_back(v[command[2] - 1]);
    }
    return answer;
}