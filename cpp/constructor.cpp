#include <iostream>
using namespace std;


class integer{
    private:
    int x,y;
    public:
    integer(){
        x=10;
        y=5;
    }
    void display(){
        cout << "1st integer is : "<<x<<endl;
        cout << "2nd integer is : "<< y;
        }
};

int main(){
    integer i;
    i.display();
    return 0;
}