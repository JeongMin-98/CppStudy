#include<iostream>
#include<list>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    list<int> ls;
    //찾아야할 위치가 처음 위치를 기준으로 주어지므로 위치 자체를 값으로 넣어두면 편리함
    for (int i = 1; i <= n; ++i)
        ls.push_back(i);

    int ret = 0;
    auto iter = ls.begin();
    for (int i = 0; i < m; ++i) {
        int x, d = 0; //d는 다음 수를 뽑기까지 이동할 칸 수
        cin >> x;

        while (*iter != x) {
            ++d;
            //왼쪽 또는 오른쪽 중 가까운 쪽으로 이동해야하지만
            //구현 편의상 무조건 오른쪽으로 이동하여 찾은 후 d가 size의 절반 이상인 경우
            //size에 대한 보수를 취하여 맞춰줌
            if (++iter == ls.end())
                iter = ls.begin();
        }

        if ((d << 1) <= ls.size())
            ret += d;
        else
            ret += ls.size() - d;

        //뽑아낼 수를 삭제
        ls.erase(iter++);
        if (iter == ls.end())
            iter = ls.begin();
    }
    cout << ret;

    return 0;
}