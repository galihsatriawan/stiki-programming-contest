#include <bits/stdc++.h>

using namespace std;

int main(){
    char str[1001];

    cin>>str;
    //(ASCII) angka dimulai dari 48 yaitu untuk 0
    //cout << (int)str[0]<<endl;
    int pos = (int)str[0];
    if(str[0]=='-'){
        if(str[1]=='0' && (strlen(str)<=2)){
            cout << "nol" <<endl;
        }else{
            cout << "bilangan bulat negatif" <<endl;
        }
    }
    else if(pos > 57){
        cout << "kata" <<endl;
    }else{
        //cout <<atoi(str)<<endl;
        //int bil = atoi(str);
        //cout << bil <<endl;
        if(str[0]=='0'){
            cout << "nol" <<endl;
        }else {
            cout << "bilangan bulat positif" <<endl;
        }
    }
    return 0;
}
