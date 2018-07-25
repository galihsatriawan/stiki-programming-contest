#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
bool detektor(string str){
	int left=0,right= str.size()-1;
	while(left<right){
		if(str[left]!=str[right]){
			return false;
		}
		left++;
		right--;
	}
	return true;
}
int gokil(){
	string str;
	int n;
	cin >> n;
	while(n--){
		cin >> str;
		if(detektor(str)){
			cout << "palindrom" <<endl;
		}else{
			cout << "bukan palindrom" <<endl;
		}
	}
    return 0;
}
