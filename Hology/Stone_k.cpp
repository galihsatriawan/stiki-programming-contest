#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    vector<long long> arr;
    long long n,bil,i,w, hasil=0,total =0;
    cin >> n;
    FOR(i,n){
        cin >> bil ;
        total += bil;
        arr.push_back(bil);
    }
    cin >> w;
    sort(arr.begin(),arr.end());
    if(n<=w){
        cout << total <<endl;
        return 0;    
    }
    for(i=n-1;i>=n-w;i--){
        hasil += arr[i];
    }
    cout << hasil <<endl;
    return 0;
}
