#include<iostream>
using namespace std;
class Class_name{
    int a;
    public:
    void getdata();
    void putdata();
};
void Class_name:: getdata(){
    cout<<"enter the value of a:\n";
    cin>>a;
}
void Class_name:: putdata(){
    int n;
    n=a*a;
    cout<<"the square of given number is:";
    cout<<n;
    
}
int main(){
     Class_name obj1;
    obj1.getdata();
     obj1.putdata();

}