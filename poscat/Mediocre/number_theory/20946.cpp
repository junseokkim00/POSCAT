#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int i) {
    for(int j=2; j*j <=i; j++) {
        if(i%j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned long long N;
    cin >> N;
    vector <int> prime;
    vector <int> compose;
    bool ip[1000001];
    fill_n(ip, 1000001, 1);
    ip[0] = 0;
    ip[1] = 0;

    for(int i=2;i<=1000000; i++) {
        if(isPrime(i)) {
            prime.push_back(i);
            for(int j=2*i; j <=1000000;j+=i) {
                ip[i] = 0;
            }
        }
    }
    while (N > 1) {
        for(int i: prime) {
            if (N%i == 0) {
                compose.push_back(i);
                N/=i;
                break;
            }
        }
    }
    if (compose.size() == 1) {
        cout << -1;
    }
    else if (compose.size() % 2 == 0) {
        for(long long i=0; i<compose.size();i+=2) {
            cout << compose[i] * compose[i+1] <<' ';
        }
    }
    else {
        for(long long i=0; i<compose.size()-3;i+=2) {
            cout << compose[i] * compose[i+1] <<' ';
        }
        cout << compose[compose.size()-3] * compose[compose.size()-2] * compose[compose.size()-1];
    }
}