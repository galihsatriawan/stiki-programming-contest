#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

long long factor(int a,int b){
    int i;
    long long hasil = 1;
    Fora(i,a,b){
        hasil *= i;
    }

    return hasil;
}

int gokil(){
    int n,r=2,total;
    long long hasil;
    cin >> n;
    total = n + 2;
    if(r>n){
        hasil = factor(r+1,total);
    }else{
        hasil = factor(n+1,total);
        hasil /= 2;
    }
    cout << hasil <<endl;
    return 0;
}
