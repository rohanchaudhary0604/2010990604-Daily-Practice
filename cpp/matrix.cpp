#include <iostream>
using namespace std;

class matrix{
     public:
     int arr[2][2];
     
        void input(){
            cout<<"enter the matrix element :";
         for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
         }
     }
     void display(){
         cout <<"the matrix is : "<<endl;
         for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
         }
     }
     
};

int main(){
    matrix n;
    n.input();
    n.display();
    return 0;
}