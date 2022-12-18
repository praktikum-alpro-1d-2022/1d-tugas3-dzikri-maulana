#include <iostream>
using namespace std;
int main(){
    float v,i,r,slc;
    cout<<"silahlan masukkan kebutuhan Anda :"<<endl;
    cout<<"1. Nilai Arus (I)\n2. Nilai tegangan (V)\n3. Nilai Hambatan (R)"<<endl;
    cout<<"Pilihan :";
    cin>>slc;
    if (slc==1){
        cout<<"Masukkan nilai Tegangan (V) : ";
        cin>>v;
        cout<<"Masukkan nilai Hambatan (R) : ";
        cin>>r;
        i=v/r;
        cout<<"\nNilai Arus dari data -ata yang kamu masukkan adalah : "<<i<<endl;
        
    }else if(slc==2){
        cout<<"Masukkan nilai Arus (I) : ";
        cin>>i;
        cout<<"Masukkan nilai Hambatan (R) : ";
        cin>>r;
        v=i*r;
        cout<<"Nilai Tegangan dari data-data yang kamu masukkan adalah : "<<v<<endl;
        
    }else if(slc==3){
        cout<<"Masukkan nilai Arus (I) : ";
        cin>>i;
        cout<<"Masukkan nilai Tegangan (V) : ";
        cin>>v;
        r=v/i;
        cout<<"Nilai Hambatan dari data-data yang kamu masukkan adalah : "<<r<<endl;
        
    }else{
       cout<<"Anda memasukkan pilihan yang salah";
    }
    return 0;
}