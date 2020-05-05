#include<iostream>
#include <cstdlib>
using namespace std;

void hitung(float berat,float tinggi)
{
    float ideal;
    ideal=berat/(tinggi*tinggi);
    cout<<"hasil : "<<ideal<<endl;

     cout<<"Bila hasil < 17 Anda Under Weight/Kurus\n";
     cout<<"Bila hasil 17-23 Anda Normal Weight/Ideal\n";
     cout<<"Bila hasil 23-27 Anda Over Weight/Kegemukan\n";
     cout<<"Bila hasil > 27 Anda obesitas\n";

}
int main(){
     float berat;
     float tinggi;
     cout<<"Program Penghitung berat badan Ideal\n";
     cout<<"------------------------------------\n";
     cout<<"Berat anda : ";
     cin>>berat;
     cout<<"Tinggi anda (m) : ";
     cin>>tinggi;
     hitung(berat,tinggi);
     return 0;
}
