#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int n,i,q,j,a,b,m,banyak;
	bool adj[1005][1005];
	cin >> n >> m;
	memset(adj,false,sizeof adj);
	For(i,m){
		cin >> a >> b;
		adj[a][b] = true;
		adj[b][a] = true;
	}
	cin >> q;
	For(i,m){
		banyak = 0;
		cin >> a >> b;
		For(j,n){
			if(adj[a][j] && adj[b][j]){
				banyak++;
			}
		}
		cout << banyak << endl;
	}
	
    return 0;
}
