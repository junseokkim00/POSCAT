#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
	
}

int main() {
    int num;
    cin >> num;
    
    for(int i=0;i<num;i++) {
        int answer;
        int a, b;
        cin >> a >> b;
        int _max, _min;
        _max = max(a, b);
        _min = min(a, b);
        cout << (a*b) / gcd(_max, _min) << '\n';
    }
}