#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <string.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
#define LL long long
LL w,n,h[1005];
set<pair<LL,LL> > exist;
map<pair<LL,LL> ,LL> hasil;
LL dp(LL x,LL akhir){
    if(x>n){
        return 0;
    }
    else{
        if(exist.count({x,akhir})>0){
            return hasil.at({x,akhir});
        }else{
            LL temp = 0;
            if(h[akhir]<=h[x]){
                temp = dp(x+1,x)+1;
            }
            temp = max(temp,dp(x+1,akhir));
            exist.insert({x,akhir});
            hasil.insert({{x,akhir},temp});
            return temp;
        }
        
    }
    
    
}
int main(){
    LL t,i,j;
    cin >> n;
    memset(h,0,sizeof h);
    
    FOR(i,n){
        cin >> h[i];       
    }
    
    cout << dp(1,1) <<endl;
    return 0;
}
