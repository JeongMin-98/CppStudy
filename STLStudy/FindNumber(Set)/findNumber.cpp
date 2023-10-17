#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> a;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        a.insert(num);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int x;
        cin >> x;
        if (a.find(x) != a.end()) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}