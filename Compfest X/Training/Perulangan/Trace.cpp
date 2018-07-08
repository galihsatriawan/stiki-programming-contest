#include <bits/stdc++.h>

using namespace std;
#define For(i,n) for(i=1;i<=n;i++)

int main(){
    int n,i,j,bil,a[1000][1000];
    long long jum=0;
    cin >>n;
    For(i,n){
        For(j,n){
            cin>>bil;
            if(i==j) jum += bil;
        }
    }
    cout << jum <<endl;
    return 0;
}
