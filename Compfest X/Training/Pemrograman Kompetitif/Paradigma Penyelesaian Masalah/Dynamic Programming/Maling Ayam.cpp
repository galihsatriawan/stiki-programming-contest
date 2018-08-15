#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long
const int N = 1e3+5;
int w[N],e[N],n;
LL memo[5005];
LL dp(int we){

    if(memo[we]!=-1){
        return memo[we];
    }else if(we == 0){
        return 0;
    }else{
        int i;
        LL maxi =0 ;
        For(i,n){
            if(we>=w[i]){
                maxi = max((e[i]+dp(we-w[i])),maxi);
            }

        }
        memo[we] = maxi;
        return maxi;
    }
}
int gokil(){
    int m,i,j;
    cin >> n >> m;
    memset(memo,-1,sizeof memo);
    For(i,n){
        cin >> w[i] >> e[i];
    }
    LL maxi = dp(m);
    cout << maxi <<endl;
    return 0;
}
