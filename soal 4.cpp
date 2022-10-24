#include <iostream>
using namespace std;

int main (){
    float b=25,x=15,c=20,y;
    cout<<"Y = b((x)^2) + 0.5(x) - c"<<endl;
    cout<<"Persamaan diatas mempunyai penyelesaian"<<endl;
    cout<<"Nilai b = "<<b<<endl;
    cout<<"Nilai x = "<<x<<endl;
    cout<<"Nilai c = "<<c<<endl;
    y = (b * x * x) + 0.5 * x - c;

    cout << "sehingga nilai dari Y adalah = " << y << endl;

    return 0;
}
