#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second < b.second;
    }
}

int main() {
    int num;
    cin >> num;
    vector <pair<int, int>> v;
    for(int i=0;i<num;i++) {
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end(), cmp);

    for(pair<int, int> p : v) {
        cout << p.first << " " << p.second << '\n';
    }
}