#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int n;
	queue<string> ls;
	int perintah;
	string nama;
	cin >> n;
	while(n--){
		cin >> perintah;
		if(perintah==1) {
			cin >> nama;
			ls.push(nama);
		}else{
			cout << ls.front()<<endl;
			ls.pop();
		}
	}
	
    return 0;
}
