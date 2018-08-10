#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

const int N = 1e5+5;

int gokil(){
    int n,q,i,j;
    set<long> dict ;
    long bil,tanya;
    cin >> n >> q;
    For(i,n){
        cin >> bil;
        dict.insert(bil);
    }
    For(i,q){
        cin >> tanya ;
        if(dict.count(tanya)>0) cout << "ada"<<endl;
        else cout << "tidak ada" <<endl;
    }

    return 0;
}
