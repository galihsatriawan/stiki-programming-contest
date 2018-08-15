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
    int n,i,t,m;
    LL hal[N],jen;
    LL kump_hal[N];
    LL max_bac[N],lama,waktu,temp;
    cin >> t;
    while(t--){

        cin >> n >>m;
        memset(kump_hal,0,sizeof kump_hal);
        For(i,n){
            cin >> hal[i];
        }
        For(i,n){
            cin >> jen;
            kump_hal[jen] += hal[i];
        }
        For(i,m){
            cin >>max_bac[i] ;
        }
        lama = 0;
        waktu = 0;
        For(i,m){
            temp = ceil((kump_hal[i]*1.0)/max_bac[i]);
            if(temp > waktu){
                lama = i;
                waktu = temp;
            }
        }
        cout << lama <<endl;
    }
    return 0;
}
