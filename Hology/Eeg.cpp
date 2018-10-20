#include <iostream>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    int n,i,j,hasil=0;
    bool pernah = false;
    cin >> n;
    while(n>1){
        if(!pernah && !(n%2==0)){
            hasil ++ ;
            pernah = true;
        }
        hasil ++ ;
        n/=2;
    }
    cout << hasil << endl;
    return 0;
}
