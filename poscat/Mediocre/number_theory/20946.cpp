#include <iostream>
using namespace std;

int main() {
    unsigned long long N;
    cin >> N;
    while(N>1) {
        for(unsigned long long i=2;i<=N;i++) {
            if(n%i==0) {
                cout << i << '\n';
                n/=i;
                break;
            }
        }
    }
}