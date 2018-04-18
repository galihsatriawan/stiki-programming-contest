#include <bits/stdc++.h>

using namespace std;
#define FORi(v) for(vector<int>::iterator it=v.begin();it!=v.end();it++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
#define LL long long
LL divide(LL a,LL x){
    LL hasil;
    if(x==1) return a;
    else{
        if(x%2==0){
            hasil = divide(a,x/2);
            return hasil*hasil%1000000;
            //hasil = hasil>999999?hasil%1000000:hasil;
            //return hasil*hasil ;
        }
        else{
            hasil = divide(a,x/2);
            return hasil*hasil*a%1000000;
        }
    }
}
int main(){
    LL hasil,a,b,i;
    cin >> a >> b;
    cout << divide(a,b)%1000000 <<endl;
    return 0;
}
