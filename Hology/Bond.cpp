#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    vector<long long> arr;
    long long n,t,j,i,bil,hasil,akhir,t_has;
    cin >> n;
    FOR(i,n){
        cin >> bil;
        arr.push_back(bil);
    }
    hasil = 0;
    if(n==1) {
        cout << 1 <<endl;
        return 0;
    }
    FORa(i,0,n-1){
        t_has = 1;
        akhir = i;
        FORa(j,i+1,n-1){
            if(arr[akhir]<=arr[j]) {
                t_has++;
                akhir = j;
            }
        }
        cout << t_has <<"--"<<endl;
        hasil = max(t_has,hasil);
    }
    cout << hasil <<endl;
    return 0;
}
