#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<b;i++)
#define sf scanf
#define pf printf
#define child vector<pair<int,int> >
const int N = 1e5+5;
vector< vector< pair<int,int> > > node(N);
bool ever[N];
int maxi =-1;

void kentang(int src, int dst,int p){
    if(src==dst){
        maxi = max(maxi,p);
    }else{
        //Visit all child
        int i;
        //cout << node.at(src).size() <<"--" <<src <<"+";
        Fora(i,0,node.at(src).size()){
            //If child never visited
            pair<int,int> cl = node.at(src).at(i);
            if(!ever[cl.first]){
                ever[cl.first] = true;
                kentang(cl.first,dst,p+cl.second);
                ever[cl.first] = false;
            }
        }
    }
}

int gokil(){

    int n,m,i,j,src,dst,l;
    memset(ever,false,sizeof ever);
    cin >> n >> m;
    For(i,m){
        cin >> src >> dst >> l;
        node.at(src).push_back({dst,l});

    }
    kentang(1,n,0);
    cout << maxi <<endl;


    return 0;
}

