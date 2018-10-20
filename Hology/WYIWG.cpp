#include <iostream>
#include <string>
#include <string.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    char s[500],h[500]="";
    int p,i,j,lom,has,index=0,temp;
    cin >> s ;
    p = strlen(s);
    FORa(i,0,p-1){
        has = (int)s[i] ; 
        if(has<97) lom = has - 48; 
    }

    FORa(i,0,p-1){
        has = (int)s[i] ; 
        if(has<97) continue;
        else {
            temp = has-(lom*2);
            h[index++] = (temp)<97 ?(123-(97-temp)) : temp;
        } 
    }
    cout << h<<endl;
    return 0;
}
