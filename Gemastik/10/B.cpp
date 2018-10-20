#include <bits/stdc++.h>

using namespace std;
bool HasComputed[2001];
int ArrZig[2001],banyak,data[2001];
void zigzag(int n,int k,int pos){
	int i;
        if(pos<=n-2)
		for(i=pos;i<=n;i++){
				ArrZig[k]=data[i];
                switch(k){
                    case 3:{
                        if(((ArrZig[k-1]>(ArrZig[k]))&&(ArrZig[k-1]>(ArrZig[k-2])))||((ArrZig[k-1]<(ArrZig[k]))&&(ArrZig[k-1]<(ArrZig[k-2])))){
						    banyak++;
					    }    
                        break;
                    }
                    default :{
                        zigzag(n,k+1,i+1);    
                        break;
                    }
                    
                }
        }	
}
int main(){
    int t,i,j;
    cin >> t;
    while(t--){
        // memset(HasComputed,false,sizeof HasComputed);
        memset(data,false,sizeof data);
        banyak = 0;
	    int n,k,l;
	    cin>>n;
        for(i=1;i<=n;i++){
            cin >> data[i];
        }
	    // zigzag(n,1,1);
        // cout << banyak <<endl;
        for(i=1;i<=n-2;i++){
            for(j=i+1;j<=n-1;j++){
                for(l=j+1;l<=n;l++){
                    ArrZig[1] = data[i];
                    ArrZig[2] = data[j];
                    ArrZig[3] = data[l];
                    k = 3;
                    if(((ArrZig[k-1]>(ArrZig[k]))&&(ArrZig[k-1]>(ArrZig[k-2])))||((ArrZig[k-1]<(ArrZig[k]))&&(ArrZig[k-1]<(ArrZig[k-2])))){
						    banyak++;
					    }    
                }
            }
        }
        cout << banyak <<endl;
    }
	
	return 0;
}
