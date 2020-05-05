#include <iostream>
#include <cstdlib>

using namespace std;

int tambah(int x,int y){
    int hasil;
    hasil=x+y;
    cout<<"hasil : "<<hasil<<endl;
    return hasil;
}

int main()
{
    int a,b,hasil;
    cout<<"masukkan bilangan pertama : ";
    cin>>a;
    cout<<"masukkan bilangan kedua : ";
    cin>>b;
    hasil=tambah(a,b);

    system("pause");
    return 0;
}
