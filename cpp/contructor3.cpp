#include <iostream>
using namespace std;
class complex{
    public:
    int real,img;
    complex(int a,int b){
        real=a;
        img=b;
    }
    void display(){
       cout <<"complex number : "<<real<<"+"<<img<<"i"<<endl;
        }
    void sum(complex a,complex b){
        cout <<"sum of number is "<<a.real+b.real<<"+"<<a.img+b.img<<"i"<<endl;

    }
};

int main(){
    complex a(5,6);
    a.display();
    complex b(7,8);
    b.display();
    complex c(0,0);
    c.sum(a,b);
    return 0;
}