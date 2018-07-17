#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int left,right,n,i,j,a[105],temp,banyak,atemp[105];
	cin >> n ;
	banyak =0 ;
	For(i,n){
		cin >> a[i];
	}
	bool kiri = true;
	left = 1;right=n;
	while(left<=right){
		if(kiri){
			atemp[++banyak] = a[left];
			//cout << a[left] << " ";
			left++;
			kiri = false;	
		}else{
			atemp[++banyak] = a[right];
			//cout << a[right] << " ";
			right--;
			kiri = true;	
		}
	}
	For(i,banyak-1){
		cout << atemp[i]<<" ";
	}
	cout << atemp[banyak];
	cout << endl;
	//cout << endl;

    return 0;
}
