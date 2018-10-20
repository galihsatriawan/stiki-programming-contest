#include <bits/stdc++.h>

using namespace std;
#define FORi(v) for(vector<int>::iterator it=v.begin();it!=v.end();it++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)
#define sf scanf
#define pf printf
#define LL long long
#define gokil main
void swap(LL &a,LL &b){
    LL temp = a;
    a= b;
    b= temp;
}
int gokil(){
    int n,t,i;
    vector<LL> data,hasil;
    LL awal,bil;
    cin >> n;
    cin >> awal;
    t= n-1;
    while(t--){
        cin >> bil;
        data.push_back(bil);
    }
    // sort(data.begin(),data.end());
    // cout <<data[0]<<data[1];
    hasil.push_back(awal);
    FORa(i,0,n-2){
        if(awal<data[i]) {
                
                cout << "kalah" <<endl;
                return 0;
            }
        else{
            awal = abs(awal-data[i]);
            hasil.push_back(data[i]);
        }
    }
    cout << "menang" <<endl;
    cout << hasil[i];
    FORa(i,1,hasil.size()-1){
        cout <<" "<< hasil[i];
    }
    cout << endl;
    return 0;
}
