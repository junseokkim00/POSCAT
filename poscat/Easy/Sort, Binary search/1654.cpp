#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<long long> v;
    for(int i=0;i<n;i++) {
        long long val;
        cin >> val;
        v.push_back(val);
    }
    long long l=1;
    long long r= *max_element(v.begin(), v.end());
    long long res = 0;
    while (l <= r) {
        long long mid = (l+r) / 2;
        int answer = 0;
        for (long long i:v) {
            answer+=(i/mid);
        }
        if (answer < m) {
            r = mid-1;
        } else {
            l = mid+1;
            if (res < mid) res = mid;
        }
    }
    cout << res;
}