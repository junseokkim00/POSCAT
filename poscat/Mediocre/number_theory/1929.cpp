#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int i) {
    for(int j=2; j*j <=i;j++) {
        if(i%j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m,n;
    cin >> m >> n;
    vector <bool> v(n+1);
    fill_n(v.begin(), n+1, 1);
    v[0] = 0;
    v[1] = 0;
    for(int i=2; i<=n;i++) {
        if(isPrime(i)) {
            for(int j = 2*i; j <= n; j+=i) {
                v[j] = 0;
            }
        }
    }

    for(int i=m; i<=n;i++) {
        if(v[i] == 1) {
            cout << i << '\n';
        }
    }
}