#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int n,m,l,i,j;
	cin >> n >> m >> l;
	// Atas
	For(i,l){
		For(j,m){
			cout << "*";
		}
		cout << endl;
	}
	For(i,n-2*l){
		For(j,m){
			if(j<=l) cout << "*";
			else cout << ".";
		}
		cout << endl;
	}
	//Bawah
	For(i,l){
		For(j,m){
			cout << "*";
		}
		cout << endl;
	}

    return 0;
}
