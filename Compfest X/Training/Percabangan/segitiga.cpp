#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >>b >> c;
    int awal,tengah,akhir,temp;
    awal = a;
    tengah = b;
    akhir = c;
    if(awal>akhir){
        temp = awal;
        awal = akhir;
        akhir = temp;
    }
    if(tengah>akhir){
        temp = tengah;
        tengah = akhir;
        akhir = temp;
    }
    if(awal > tengah){
        temp = awal;
        awal = tengah;
        tengah = temp;
    }

    //cout << awal << tengah << akhir <<endl;
    if((awal < tengah) && (tengah< akhir) && (awal + tengah>akhir)){
        cout << "segitiga"<<endl;
    }else{
        cout << "bukan segitiga"<<endl;
    }
    return 0;
}
