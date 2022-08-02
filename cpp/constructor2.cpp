#include <iostream>
using namespace std;


class integer{
    private:
    int x,y;
    public:
    integer(int a, int b){
        x=a;
        y=b;
    }
    void display(){
        cout << "1st integer is : "<<x<<endl;
        cout << "2nd integer is : "<< y;
        }
};

int main(){
    integer i(2,8);
    i.display();
    return 0;
}