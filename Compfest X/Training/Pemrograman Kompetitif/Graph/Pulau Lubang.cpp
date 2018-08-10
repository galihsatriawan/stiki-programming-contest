#include <bits/stdc++.h>

using namespace std;

#define gokil main
#define For(i,n) for(i=1;i<=n;i++)
#define Fora(i,a,b) for(i=a;i<=b;i++)
#define sf scanf
#define pf printf

char board[105][105];

int dfs(int a,int b){
    int total = 1;
    board[a][b]='#';
    // Kanan
    if(board[a][b+1]=='.') total = total+dfs(a,b+1);
    if(board[a+1][b]=='.') total = total+dfs(a+1,b);
    if(board[a][b-1]=='.') total = total+dfs(a,b-1);
    if(board[a-1][b]=='.') total = total+dfs(a-1,b);
     return total;
}
int gokil(){

    int m,n,i,j;
    cin >> n >> m;
    For(i,n){
        For(j,m){
            cin >> board[i][j];
        }
    }
    int maxi = 0, banyak = 0 ;
    For(i,n){
        For(j,m){
            if(board[i][j]=='.'){
                maxi = max(maxi,dfs(i,j));
                banyak++;
            }
        }
    }
    cout << banyak <<" "<<maxi <<endl;
    return 0;
}
