#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <string.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
#define LL long long
LL n;
vector<LL> data;
vector<vector<LL> > dic;
int main(){
    LL t,i,j,bil,ex;
    cin >> n;
    FOR(i,n){
        cin >> bil;
        data.push_back(bil);
    }
    cin >> t;
    
    FOR(i,t){
        cin >> ex;
        vector<LL> temp;
        FOR(j,ex){
            cin >> bil;  
            temp.push_back(bil);
        }    
        dic.push_back(temp);
    }
    
    return 0;
}
