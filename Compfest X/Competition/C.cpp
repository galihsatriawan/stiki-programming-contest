#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long
const int N = 5e4+5;

vector< vector<int> > node(N);
vector<int> walkot;
int relasi[N];
bool visited[N];
void trans(int src,int k){
    if(k>0){
        int i;
        if(node[src].size()!=0){
                Fora(i,0,node[src].size()-1){
                    int cur = node[src][i];
                    if(!visited[cur]){
                        relasi[cur]++;
                        visited[cur] = true;
                        trans(cur,k-1);
                        //visited[cur] =false;
                    }
                }
        }

    }
}
int gokil(){
    int t,n,i,j,k,par,child,pos,m;
    cin >> t;
    while(t--){
        node.clear();
        walkot.clear();
        memset(relasi,0,sizeof relasi);

        cin >> n >> m >>k;
        For(i,n-1){
            cin >> par >> child;
            node[par].push_back(child);
            node[child].push_back(par);
        }
        For(i,m){
            memset(visited,false,sizeof visited);
            cin >> pos;
            walkot.push_back(pos);
            relasi[pos]++;
            visited[pos] = true;
            trans(pos,k);
        }
        int banyak = 0;
        For(i,n){
            //cout << relasi[i]<<endl;
            if(relasi[i]==m) banyak++;
        }
        cout << banyak <<endl;

    }
    return 0;
}
