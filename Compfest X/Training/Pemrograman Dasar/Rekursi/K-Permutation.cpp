#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
int arr[10];
bool used[10];
void cetak(int n){
	int i;
	For(i,n){
		if(i==n) cout << arr[i]<<endl;
		else cout << arr[i] <<" ";
 	}
}
void r(int index, int k,int n){
	int i;
	if(index==n){
		For(i,n){
			arr[index] = i;
			if(!used[i] &&(abs(arr[index-1]-arr[index])<=k)){
				cetak(n);
			}
		}
	}else{	
		For(i,n){
			if((abs(arr[index-1]-i) <= k)&& !used[i] ||(index==1)){
				used[i] = true;
				arr[index]= i;
				r(index+1,k,n);
				used[i] = false;
			}	
		}
	}
}
int gokil(){
	int n,k,i;
	memset(used,false,sizeof(used));
	memset(arr,0,sizeof(arr));
	cin >> n >> k;
	r(1,k,n);
    return 0;
}
