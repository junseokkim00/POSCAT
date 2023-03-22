#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> arr;
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end());
    cin >> m;
    for (int i=0;i<m;i++) {
        int target;
        cin >> target;
        cout << binary_search(arr.begin(),arr.end(), target) <<'\n';
    }
}