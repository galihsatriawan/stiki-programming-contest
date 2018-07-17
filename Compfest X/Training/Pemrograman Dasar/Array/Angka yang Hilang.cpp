#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int n,i,k,bil,banyak=0,temp[100005];
	bool a[100005];
	memset(a,false,sizeof a);
	cin >> n >> k;
	For(i,k){
		cin >> bil ;
		a[bil] = true;
	}
	For(i,n){
		if(!a[i]) {
			temp[++banyak] = i;

		}
	}
	
	For(i,banyak-1){
		cout << temp[i]<<" ";
	}
	cout << temp[banyak];
	cout << endl;
//	cout << banyak<<endl;

    return 0;
}
