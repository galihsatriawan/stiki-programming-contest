#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
int faktor(int x){
	int banyak = 0;
	int i,j;
	For(i,x){
		banyak = (x%i==0)?banyak+1:banyak;
	}
	return banyak;
}
int gokil(){
	int n,i,jum=0;
	cin >> n;
	For(i,n){
		jum+= faktor(i);
	}
	cout << jum <<endl;

    return 0;
}
