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
    int n,i;
    LL bil;
    priority_queue<LL> ls;
    cin >> n;
    For(i,n){
        cin >> bil;
        ls.push(bil);
    }
    cout << ls.top()<<endl;
    return 0;
}
