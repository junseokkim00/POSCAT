#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int> v;
    for(int i=0;i<num;i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    if(num%2==1) cout << v[v.size() / 2];
    else cout << v[v.size() / 2 -1];
    
}