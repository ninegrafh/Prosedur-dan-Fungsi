#include<iostream>
#include <cstdlib>
using namespace std;

float hitung(float berat,float tinggi)
{
    float ideal;
    ideal=berat/(tinggi*tinggi);
    cout<<"hasil : "<<ideal<<endl;
    cout<<"Bila hasil < 17 Anda Under Weight/Kurus\n";
    cout<<"Bila hasil 17-23 Anda Normal Weight/Ideal\n";
    cout<<"Bila hasil 23-27 Anda Over Weight/Kegemukan\n";
    cout<<"Bila hasil > 27 Anda obesitas\n";
    return ideal;



}
int main(){
     float berat,tinggi,ideal;
     cout<<"Program Penghitung berat badan Ideal\n";
     cout<<"------------------------------------\n";
     cout<<"Berat anda : ";
     cin>>berat;
     cout<<"Tinggi anda (m) : ";
     cin>>tinggi;
     ideal=hitung(berat,tinggi);
     return 0;
}
