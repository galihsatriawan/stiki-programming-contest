#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

void balik_range(string &str,int a,int b){
	int i,j=a-1;
	string temp = str;
	for(i=b-1;i>=a-1;i--){
		str[i] = temp[j++];
	}
}
void balik(string &str,int a,int b){
	char temp = str[a-1];
	str[a-1]=str[b-1];
	str[b-1] = temp;
}
int gokil(){
	int n,i,j,q,per,x,y;
	string str;
	cin >> n >>q;
	cin >> str;
	For(i,q){
		cin >> per >> x >> y;
		if(per==1){
			balik(str,x,y);
		}else{
			balik_range(str,x,y);	
		}
	}
	cout << str <<endl;
    return 0;
}
