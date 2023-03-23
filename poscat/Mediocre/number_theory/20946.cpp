#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long N;
    cin >> N;
    vector <int> compose;
    int ip[1000001];
    for(int i=1;i<=1000000;i++) {
        ip[i] = i;
    }

    for(int i=2;i*i<=N; i++) {
        if(ip[i] == i) {
            for(int j=i*i; j <=1000000;j+=i) {
                ip[j] = i;
            }
        }
    }
    while (N > 1) {
        // for(int i: prime) {
        //     if (N%i == 0) {
        //         compose.push_back(i);
        //         N/=i;
        //         break;
        //     }
        // }
    }

    if (compose.size() < 4) {
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