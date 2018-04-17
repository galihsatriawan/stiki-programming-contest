#include <bits/stdc++.h>

using namespace std;
#define FORi(v) for(vector<int>::iterator it=v.begin();it!=v.end();it++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    int t,n,v1,v2,i,j;

    //Rumus s = v.t --> t = s/v
    cin >> t;
    while(t--){
        cin >> n >> v1 >> v2;
        // Jika waktu yang dibutuhkan stairs lebih kecil
        if((n*1.0*sqrt(2)/v1)<(n*1.0*2/v2)){
            cout << "Stairs" <<endl;
        }else{
            cout << "Elevator" <<endl;
        }
    }
    return 0;
}
