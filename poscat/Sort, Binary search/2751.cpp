#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int num;
    cin >> num;
    for (int i=0;i<num;i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());

    for (int i: v) {
        cout << i << '\n';
    }
}