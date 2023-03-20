#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    unsigned long long num;
    cin >> num;
    unsigned long long q;
    q = sqrt(num);
    if ((q*q) < num){
        ++q;
    }
    cout << q;

    return 0;
}
