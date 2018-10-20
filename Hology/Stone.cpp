#include <iostream>
#include <map>
#include <algorithm>
#include<set>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
int bil[100001],w,n;
set<pair<int,int> > exist;
map<pair<int,int> ,int> hasil;
int dp(int x,int k){
    if(x>n || k==0) return 0;
    else if(exist.count({x,k})>0){
        return hasil.at({x,k});
    }
    else {
        int temp = max(dp(x+1,k),dp(x+1,k-1)+bil[x]);
        exist.insert({x,k});
        hasil.insert({{x,k},temp}); 
        return temp;
    }
}
int main(){
    int t,i,j;
    cin >> n;
    FOR(i,n){
        cin >> bil[i];       
    }
    cin >> w;
    cout << dp(1,w) <<endl;
    return 0;
}
