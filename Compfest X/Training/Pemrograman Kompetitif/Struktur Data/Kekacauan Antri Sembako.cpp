#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

int gokil(){
	int n,perintah;
	list<string> ls;
	string nama;
	cin >> n;
	while(n--){
		cin >> perintah;
		switch(perintah){
			case 1:{
				cin >> nama;
				ls.push_front(nama);
				break;
			}
			case 2:{
				cin >> nama;
				ls.push_back(nama);
				break;
			}
			case 3:{
				cout << ls.front() <<endl;
				ls.pop_front();
				break;
			}
			case 4:{
				cout << ls.back() <<endl;
				ls.pop_back();
				break;
			}
		}
		
	}
    return 0;
}
