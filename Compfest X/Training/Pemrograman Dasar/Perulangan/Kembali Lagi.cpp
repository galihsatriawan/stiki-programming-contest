#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int a,b,c,x,z,i;
	cin >> a >> b >> c >> x;
	i=1;
	z = x;
	z = (a*z+b)%c;
	while(z!=x){
		z = (a*z+b)%c;
		i++;	
	}
	
	cout << i << endl;
	
    return 0;
}
