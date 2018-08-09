#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
void solved(int n,char from,char helper,char dst){
	if(n>0){
		solved(n-1,from,dst,helper);
		cout << n<<" " << from <<" "<< dst <<endl;
		solved(n-1,helper,from,dst);
	}
	
}
int gokil(){
	int n;
	cin >> n;
	solved(n,'A','B','C');
    return 0;
}
