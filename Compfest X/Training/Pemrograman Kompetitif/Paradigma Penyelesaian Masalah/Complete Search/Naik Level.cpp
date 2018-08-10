#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long
const int N = 1e2 + 5;
LL e[N],m;
int n;
bool subset(int i, LL banyak){
    if(banyak == m){
        return true;
    }else if(i>n){
        return false;
    }
    else {
        return subset(i+1,banyak+e[i]) || subset(i+1,banyak);
    }

}
int gokil(){
    int i,j;
    LL bil;

    cin >> n >> m;
    For(i,n){
        cin >> e[i];
    }
    if(subset(0,0)){
        cout << "bisa" <<endl;
    }else{
        cout << "tidak bisa" <<endl;
    }

    return 0;
}
