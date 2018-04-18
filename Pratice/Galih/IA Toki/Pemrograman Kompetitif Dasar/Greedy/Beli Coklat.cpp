#include <bits/stdc++.h>

using namespace std;
#define FORi(v) for(vector<int>::iterator it=v.begin();it!=v.end();it++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    int n,t,i;
    long long uang;
    vector< pair<long long,long long> > coklat;

    cin >> n >> uang;
    //Urut dari yang terbesar
    FOR(i,n){
        long long b,h;
        cin >> b >> h;
        coklat.push_back({b,h});
    }
    sort(coklat.begin(),coklat.end());
    //cout << coklat.top().first <<endl;
    //ambil dari yang terkecil
    long long banyak = 0;
    FORa(i,0,coklat.size()-1){
        //cout << uang <<endl;
        pair <long long , long long> temp_coklat = coklat[i];
        //Ambil coklat seperlunya
        long long ambil_bebek;
        ambil_bebek = min(uang/temp_coklat.first,temp_coklat.second);
        banyak +=ambil_bebek;
        uang -=(ambil_bebek*temp_coklat.first);
    }
    cout << banyak << endl;

    return 0;
}
