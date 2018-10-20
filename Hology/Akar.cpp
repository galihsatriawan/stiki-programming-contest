#include <bits/stdc++.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int hasil(int x,int n,int arr[]){
    int i,j,has=0,p=n,r;
    FOR(i,n-1){
        r = ((int)pow(x,p));
        has = has +r ;
        p--;
        cout << r <<endl;
    }
    return (has+arr[n]);
}

int main(){
    int t,n,j,i,bil,arr[5],x1,x2;
    cin >> t;
    while(t--){
        cin >> n;
        FOR(i,n){
            cin >> arr[i];
        }
        cin >> x1 >> x2;
        cout << ((hasil(x1,n,arr)) == 0 ? x1 : x2 )<<endl;
    }
    return 0;
}
