#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <string.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
#define LL long long
LL bil[1005],w,n,h[1005];
set<pair<LL,LL> > exist;
map<pair<LL,LL> ,LL> hasil;
LL dp(LL x,LL k){
    if((x>n) || (k==0)) return 0;
    else if(exist.count({x,k})>0){
        return hasil.at({x,k});
    }

    else {
        if(h[x]<=k){
            LL temp = max(dp(x+1,k-h[x])+bil[x],dp(x+1,k));
            exist.insert({x,k});
            hasil.insert({{x,k},temp}); 
            return temp;
        }else{
            LL temp = dp(x+1,k);
            exist.insert({x,k});
            hasil.insert({{x,k},temp}); 
            return temp;
        }

        
    }
}
int main(){
    LL t,i,j;
    cin >> n;
    memset(h,0,sizeof h);
    memset(bil,0,sizeof bil);
    FOR(i,n){
        cin >> h[i];       
    }
    FOR(i,n){
        cin >> bil[i];       
    }
    cin >> w;
    cout << dp(1,w) <<endl;
    return 0;
}
