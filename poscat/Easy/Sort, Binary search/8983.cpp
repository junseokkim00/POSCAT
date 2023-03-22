#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int m,n,l;
    int answer = 0;
    vector <int> v;
    cin >> m >> n >> l;
    for(int i=0; i<m;i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        // binary search on every coordinates
        // 
    }
    
    
}