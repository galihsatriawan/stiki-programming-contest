#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long

const int N = 1e5+5;

int gokil(){
    vector< pair<LL,LL> > jadwal_terbalik;
    int n,i,j;
    LL a,b;

    cin >> n;
    For(i,n){
        cin >> a >> b;
        jadwal_terbalik.push_back({b,a});
    }
    sort(jadwal_terbalik.begin(),jadwal_terbalik.end());
    /*Fora(i,0,n-1){
        cout << jadwal_terbalik[i].first<<"+"<<jadwal_terbalik[i].second <<"-";
    }*/
    // Format (end,start)
    int banyak = 1;
    LL en = jadwal_terbalik[0].first;
    Fora(i,1,n-1){
        if(jadwal_terbalik[i].second >= en){
            banyak++;
            en = jadwal_terbalik[i].first;
        }
    }
    cout << banyak <<endl;



    return 0;
}
