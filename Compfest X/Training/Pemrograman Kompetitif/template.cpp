#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf
#define LL long long
const int N = 1e5+5;
int wind=102;
int id = 2;
char* noteku="War";
char fulls[255];
int gokil(){
    noteku="oke";
    snprintf(fulls,sizeof fulls,"at+httppara=\"URL\",\"http://antontds.com/Service/insert_from_form.php?id_arduino=%d&wind_speed=%d&note=%s\"",id,wind,noteku);
    cout << fulls<<endl;
    return 0;
}
