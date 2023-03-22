#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


long long gcd(long long a, long long b) {
    if(a%b == 0) {
        return b;
    }
    return gcd(b, a%b);
}

int main() {
    int n;
    int answer=0;
    cin >> n;
    long long prev=0;
    vector <long long> v;
    for (int i=0;i<n;i++) {
        long long val;
        cin >> val;
        if (prev !=0 ) {
            v.push_back(val - prev);
        }
        prev = val;
    }
    
    sort(v.begin(), v.end());
    long long g = v[0];
    for(int i=1;i<v.size();i++) {
        g = gcd(v[i], g);
    }
    for(long long i: v) {
        answer += (i/g - 1);
    }
    cout << answer;

}