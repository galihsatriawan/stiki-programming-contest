#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
const long N = 1e5 + 5;
long t=0,leaf=0;
vector< vector<long> > node(N);
long maxi = -1;

void trans(long cur,long tinggi){
	long i;
	for(i = 0 ;i <node[cur].size();i++){
		// Node 
		int nd = node[cur].at(i);
		if(node[nd].size()==0) {
			leaf++;
			maxi = max(maxi,tinggi);	
		}
		else{
			trans(nd,tinggi+1);
		}
	}
}

int gokil(){
	long i,n,m,j,p;
	cin >> n ;
	For(i,n-1){
		cin >> 	p;
		node[p].push_back(i+1);	
	
	}
	// Start from 1 
	
	long curr=1;
	//Transverse
	trans(curr,1);
	//Find high
	if(n==1) cout << 1 <<" " << 0 <<endl;
	else cout << leaf << " " << maxi << endl;
    return 0;
}
