#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
double t(double n){
	if(n==1){
		return 1;
	}else{
		return (1+t(ceil(n/2))+t(floor(n/2)));
	}
}
int gokil(){
	double n;
	cin >> n;
	cout << t(n) <<endl;
    return 0;
}
