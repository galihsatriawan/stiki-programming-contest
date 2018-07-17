#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int  n,m,i,j,a[105][105];
	cin >> n >> m;
	For(i,n){
		For(j,m){
			cin >> a[i][j] ;
		}
	}
	
	For(i,m){
		For(j,n){
			if(j==n) {
				cout << a[j][i] << endl;
			}else{
				cout << a[j][i] << " ";
			}
		}
	}

    return 0;
}
