#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long
const int N = 1e5+5;
int memo[1005][1005];
int lcs(string s,string t,int left,int right){
    if(memo[left][right]!=-1){
        return memo[left][right];
    }else if(left==-1 || right==-1){
        return 0;
    }else if(s[left]==t[right]){
        memo[left][right] =1+lcs(s,t,left-1,right-1);
        return memo[left][right];
    }else{
        int maxi = max(lcs(s,t,left-1,right),lcs(s,t,left,right-1));
        memo[left][right]= maxi;
        return maxi;
    }
}
int gokil(){
    string s,t;
    int maxi,i;
    cin >> s;
    cin >> t;
    memset(memo,-1,sizeof memo);
    maxi = lcs(s,t,s.size()-1,t.size()-1);
    cout << maxi <<endl;
    return 0;
}
