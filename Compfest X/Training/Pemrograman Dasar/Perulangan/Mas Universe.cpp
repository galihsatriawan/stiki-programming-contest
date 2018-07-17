#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	// Program Mencari nilai terbesar
	int maxi ;
	int i,n,bil;
	cin >> n;
	cin >> maxi ;
	For(i,n-1){
		cin >> bil;
		maxi = (bil>maxi) ? bil:maxi;
	}
	cout << maxi <<endl;

    return 0;
}
