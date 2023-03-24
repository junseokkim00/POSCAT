#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n, m, val;
    cin >> n >> m;

    for(int i=0;i<n;i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<m;i++) {
        int a,b;
        cin >> a >> b;
        cout << upper_bound(v.begin(),v.end(),b) - lower_bound(v.begin(), v.end(), a) << '\n';
    }
}