#include <iostream>
using namespace std;

// int getData(const int a){
//  return a;
// }
// int main(){
//     int b;
//     cout<<"enter the  value of b:\n";
//     cin>>b;
//     getData(b);
// }

// void getData(int a, int b, int c=89, int d=78){
//  cout<<a <<b <<c <<d;
// }
// int main(){
//     cout<<"enter the  values:\n";
//     getData(12,34);
// }

class Class_name
{
    int a;
    public:
    void getData(const int a)
    {
        Class_name::a = a;
        cout << "the value of a " << a;
    }
};
int main()
{
    Class_name obj1;
    int b;
    cout << "enter the value of b ";
    cin >> b;
   obj1. getData(b);
}