#include <bits/stdc++.h>

using namespace std;

#define maing main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

const int N = 1e3+5;

int maing(){
    vector<int> arr;
    map<int,int> dict;
    set<int> pernah;
    int n,j,i,q,x,bil,banyak;
    cin >> n >> q;

    For(i,n){
        cin >> bil;
        if(pernah.count(bil)>0){
            banyak = dict.at(bil);
            banyak++;
            dict.erase(bil);
            dict.insert({bil,banyak});

        }else{
            dict.insert({bil,1});
            arr.push_back(bil);
        }

    }
    sort(arr.begin(),arr.end());
    For(i,q){
        cin >> x;
        cout << arr.at(x-1)<<endl;
    }
    return 0;
}
