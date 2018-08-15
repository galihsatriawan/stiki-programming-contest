#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long
#define L long
const int N = 1e5+5;
int nD,m;
vector<L> dAm;
vector<L> data;
L maxi;
L gcd(vector<L> bil,L kecil,L besar,int n){
    L fpb = kecil;
    bool ada = false;
    int i,j,banyak=1;

    for(j=2;j<=besar;j+=1){
        banyak= 1;
        cout << kecil<<"_";
        Fora(i,0,n-1){
            cout << bil[i]<<" ";
            if(bil[i]!=kecil && (bil[i]%j==0)){
                banyak++;
            }

        }
        cout <<endl;

        if(banyak==n) {
            fpb = j;
            ada =true;
        }
    }


    if(!ada) fpb = 1;
    return fpb;
}
map < pair<L,L> ,L> ls;
set < pair<L,L> > dict;
L gcdku(L a,L b){
    if(dict.count({a,b})!=0){
        return ls.at({a,b});
    }else if(b==0){
        return a;
    }else{
        dict.insert({a,b});
        ls.insert({{a,b},gcdku(b,(a%b))});
        return ls.at({a,b});
    }
}
L fixGcd(vector<L> bil,int n){
    L gc = gcdku(bil[0],bil[1]);
    int i;
    Fora(i,2,n-1){
        gc = gcdku(gc,bil[i]);
    }
    return gc;
}

L subs(int ind,L kecil,L besar,int k,int m){
    if(k==m){
        /*int a;
        Fora(a,0,k-1){
            cout <<dAm[a]<<"--";
        }
        cout <<endl;*/
        maxi = max(maxi,fixGcd(dAm,k));

    }else{

        int i,j;
        L temp =kecil;
        L tempB =besar;
        Fora(i, ind+1,nD-1){
            dAm.push_back(data[i]);
            kecil = min(kecil,data[i]);
            besar= max(besar,data[i]);
            subs(i,kecil,besar,k+1,m);
            kecil = temp;
            besar = tempB;
            dAm.pop_back();
        }
    }
}
void isi(vector<L> &a,vector<L> &b){
    int i;
    Fora(i,0,a.size()-1){
        b.push_back(a[i]);
    }
}
L knap(vector<L> bil,int i,int k){
    if(k==0){
        int a;

        if(bil.size()==m){
            maxi = max(maxi,fixGcd(bil,m));
        }

    }else if(i<nD){
        //cout << "kentang"<<endl;
        vector<L> sa,du;
        if(bil.size()!=0){
            isi(bil,sa);
            isi(bil,du);
        }

        sa.push_back(data[i]);
        maxi = max(knap(sa,i+1,k-1),knap(du,i+1,k));
    }
    return maxi;
}
int gokil(){
    int t,i,j;

    L bil;
    L bes=-1;
    cin >> t;
    while(t--){
        bes = -1;
        dAm.clear();
        data.clear();
        maxi = 0;
        cin >> nD >> m;
        For(i,nD){
            cin >> bil;
            bes = max(bil,bes);
            data.push_back(bil);
        }
        //cout << m<<endl;
        //subs(-1,1e6+5,-1,0,m);
        if(m==1){
            cout << bes <<endl;
            return 0;
        }
        knap(dAm,0,m);
        cout << maxi <<endl;
        //sort(data.begin(),data.end());
        //cout << gcd(data,data[0],data.size())<<endl;
    }


    return 0;
}
