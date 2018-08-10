#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
const int N = 1e5 + 5;
vector< vector<int> > node(N); 
priority_queue< pair<int,int> > all_edge;
vector < pair<int,int> > edge;
void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
int maxi = 0;
void trans(int curr, int p){
	int i;
	if(node[curr].size()==0){
		maxi = max(p,maxi);
	}else{
		Fora(i,0,node[curr].size()-1){
			trans(node[curr][i],p+1);
		}
	}
}
int gokil(){
	int n,i,j,src,dst;
	cin >> n;
	For(i,n-1){
		cin >> src >> dst;
		if(src > dst){
			swap(src,dst);
		}
		all_edge.push({src,dst});
	}
	Fora(i,0,n-2){
		edge.push_back(all_edge.top());
//		cout << all_edge.top().first <<" "<<all_edge.top().second <<endl; 
		all_edge.pop();
	}
	for(i=n-2;i>=0 ;i--){
		node[edge[i].first].push_back(edge[i].second);	
	}
	trans(1,0);
	cout << maxi <<endl;
    return 0;
}
