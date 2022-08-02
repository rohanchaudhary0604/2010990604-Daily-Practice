#include <iostream>
using namespace std;

class complex{
    public:
    int real;
    int img;
    void display(complex x){
        cout << x.real << "+" << x.img<<"i"<<endl;
    }
};

int main(){
    complex A,B;
    cout << "enter real part";
    cin >> A.real;
    cout<< "enter imaginary part";
    cin >> A.img;
    //cout << A.real << "+" << A.img << "i";
      cout << "enter real part";
    cin >> B.real;
    cout<< "enter imaginary part";
    cin >> B.img;
    A.display(A);
    B.display(B);
    return 0;

}