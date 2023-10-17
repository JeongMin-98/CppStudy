//
// Created by jeong on 2023-07-26.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> merge(vector<int> &array, vector<int> &left, vector<int> &right) {
    int leftLength = left.size();
    int rightLength = right.size();

    int searchLeftIdx = 0;
    int searchRightIdx = 0;
    int idx = 0;

    while ((searchLeftIdx < leftLength) && (searchRightIdx < rightLength)) {
        if (left[searchLeftIdx] < right[searchRightIdx]) {
            array[idx] = left[searchLeftIdx];
            idx++;
            searchLeftIdx++;
        } else {
            array[idx] = right[searchRightIdx];
            idx++;
            searchRightIdx++;
        }
    }

    while (searchLeftIdx < leftLength) {
        array[idx] = left[searchLeftIdx];
        idx++;
        searchLeftIdx++;
    }
    while (searchRightIdx < rightLength) {
        array[idx] = right[searchRightIdx];
        idx++;
        searchRightIdx++;
    }

    return array;
}

vector<int> merge_sort(vector<int> &array) {
    if (array.size() < 2)
        return array;

    int mid = int(array.size() / 2);
    vector<int> left(array.begin(), array.begin() + mid);
    vector<int> right(array.begin() + mid, array.end());

    merge_sort(left);
    merge_sort(right);

    merge(array, left, right);

    return array;

}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    int i, j, k;
    vector<int> answer;

    for (auto item: commands) {
        i = item[0];
        j = item[1];
        k = item[2];

        vector<int> separated_list(array.begin() + (i - 1), array.begin() + j);

        merge_sort(separated_list);

        answer.push_back(separated_list[k - 1]);
    }

    return answer;

}

int main()
{
    vector<int> result;
    vector<int> array {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};

    result = solution(array, commands);

    for (auto& item : result){
        cout << item << " ";
    }
}