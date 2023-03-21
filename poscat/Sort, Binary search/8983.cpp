#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int m,n;
    long long l;
    int answer = 0;
    vector <long long> v;
    cin >> m >> n >> l;
    for(int i=0; i<m;i++) {
        long long val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());

    for(int i=0;i<n;i++) {
        long long x,y;
        cin >> x >> y;
        long long lower = x-l+y;
        long long upper = x+l-y;
        if (y > l) {
            continue;
        } else {
            int left = 0;
            int right = v.size()-1;

            while (left <= right) {
                int mid = (left+right) / 2;
                if(lower <= v[mid] && v[mid] <= upper) {
                    answer++;
                    break;
                } else if (v[mid] < lower) {
                    left = mid+1;
                } else { // upper < v[mid]
                    right = mid-1;
                }
            }
        }
    }
    cout << answer;
    
    
}