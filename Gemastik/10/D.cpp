#include <bits/stdc++.h>

using namespace std;
#define FORi(v) for(vector<int>::iterator it=v.begin();it!=v.end();it++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
#define sf scanf
#define pf printf
#define LL long long
#define gokil main
void swap(int &a,int &b){
    int temp =a ;
    a = b ;
    b = temp;
}
int gokil(){
    int n,k,i,j,data[11][11];
    cin >> n >> k;
    FOR(i,n){
        FOR(j,n){
            data[i][j] = i * j;
        }
    }
    swap(data[1][n],data[2][n]);
    FOR(i,n){
        FOR(j,n){
            if(j== n) cout << data[i][j] <<endl;
            else cout << data[i][j]<<" ";
        }
    }
    return 0;
}
