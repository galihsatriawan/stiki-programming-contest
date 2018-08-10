#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
    int n,q,i,j;
    string nama;
    map<string,int> dict_nama;
    set<string> cek_nama;
    cin >> n >> q;
    For(i,n){
        cin >> nama;
        dict_nama.insert({nama,i});
        cek_nama.insert(nama);
    }
    For(i,q){
        cin >> nama;
        if(cek_nama.count(nama)==0) cout << -1 <<endl;
        else cout << dict_nama.at(nama) <<endl;
    }
    return 0;
}
