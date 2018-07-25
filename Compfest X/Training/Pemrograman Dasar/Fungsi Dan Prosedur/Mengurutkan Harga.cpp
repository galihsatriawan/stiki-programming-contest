#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

void swap(int &a,int &b){
	int temp;
	temp = a;
	a = b;
	b = a;
}
int gokil(){
	int n,i,j,arr[50005];
	cin >> n;
	For(i,n){
		cin >> arr[i];
	}
	For(i,n-1){
		Fora(j,i+1,n){
			if(arr[i]>=arr[j]){
				swap(arr[i],arr[j]);
				cout << i << " " <<j<<endl;
			}
		}
	}
    return 0;
}
