#include <bits/stdc++.h>

using namespace std;

long gcd(long a,long b){
	if(b==0){
		return a;
	}else{
		long r = a % b ;
		return gcd(b,r);
	}
}
int main(){
	
	long long n;
	long a,b;
	cin>> n >> a >> b;
	long kpk = a * b / gcd(a,b);
	long long hasil = (n/a) + (n/b) - (n/kpk);
	
	cout << hasil <<endl;
	
}
