#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int n,i,j,a[105],temp;
	cin >> n ;
	For(i,n){
		cin >> a[i];
	}
	for(i=n;i>=1;i--){
		cout << a[i] <<endl;
	}

    return 0;
}
