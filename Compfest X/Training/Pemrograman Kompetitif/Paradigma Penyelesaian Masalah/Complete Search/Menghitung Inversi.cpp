#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

const int N = 1e3 + 5;
int gokil(){
    int n,i,j,a[N],banyak = 0;
    cin >> n;
    For(i,n){
        cin >> a[i];
    }
    For(i,n-1){
        Fora(j,i+1,n){
            if(a[i] > a[j]) banyak++;
        }
    }
    cout << banyak <<endl;
    return 0;
}
