#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int hasil(int x,int n,int arr[]){
    int i,j,has=0,p=n,r;
    FOR(i,n){
        r = arr[i]*((int)pow(x,p));
        has = has +r ;
        p--;
        // cout <<x<<" "<<p<<" "<< r <<endl;
    }
    return (has+arr[n+1]);
}

int main(){
    int temp,t,n,j,i,bil,arr[5],x1,x2;
    cin >> t;
    while(t--){
        memset(arr,0,sizeof arr);
        cin >> n;
        FOR(i,n+1){
            cin >> arr[i];
        }
        cin >> x1 >> x2;
        if(x1>x2){
            temp = x1;
            x1= x2;
            x2 = temp;
        }
        FORa(i,x1,x2){
            int temp1 = (hasil(i,n,arr));
            // cout << i<<" - "<<temp1;
           if((hasil(i,n,arr)) == 0){
               cout << i<< endl;
               break;
           } 
        }
    }
    return 0;
}
