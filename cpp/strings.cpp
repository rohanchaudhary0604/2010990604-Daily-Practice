#include <iostream>
#include <cstring>
using namespace std;

class greeting{
    public:
    char a[6] = "hello";
    char b[6] = "world";
    char c[10];
    int len;

    void display(){
        strcpy(c,a);
        cout<<"c says :"<<c<<endl;

        strcat(a,b);
        cout<<"a became :"<<a<<endl;

        len =strlen(a);
        cout<<"length of a is: "<<len<<endl;
    }
};

int main(){
    greeting j;
    j.display();
    return 0;
}
