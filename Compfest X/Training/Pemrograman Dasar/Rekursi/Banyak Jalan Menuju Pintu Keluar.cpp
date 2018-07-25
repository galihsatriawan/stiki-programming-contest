#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
int banyak_cara = 0;
int n,m;
void cari_cara(int posa,int posb){
	if(((posa>n)||(posb>m)) ||((posa==n)&&(posb==m))){
		if((posa==n)&&(posb==m)){
			banyak_cara++;
		}
	}else{
		cari_cara(posa+1,posb);
		cari_cara(posa,posb+1);
	}
}
int gokil(){
	
	cin >> n >> m;
	cari_cara(1,1);
	cout << banyak_cara<<endl;
    return 0;
}
