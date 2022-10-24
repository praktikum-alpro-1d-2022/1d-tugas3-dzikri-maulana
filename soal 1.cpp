#include <iostream>
#include <math.h>
using namespace std;

int main (){
    float tbase=8,thigh=10,hpts;
    cout<<"Progam ini menghitung nilai sisi terpanjang (hipotenusa)\ndari sebuah segitiga dengan ketentuan :"<<endl;
    cout<<"Nilai alas = "<<tbase<<"\ndan"<<endl;
    cout<<"Nilai tinggi = "<<thigh<<endl;
    hpts = sqrt(tbase*tbase+thigh*thigh);
    cout <<"\n\nMaka didapat hipotenusa (Sisi terpanjang) = " << hpts;

    /*Jika tidak bisa ditarik akar kuadrat secara bulat, maka tulis saja dalam bentuk akar kuadrat*/

    cout<<" atau akar kuadrat dari "<<(tbase*tbase+thigh*thigh)<<endl;

    return 0;
}