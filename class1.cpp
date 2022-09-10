#include<iostream>
using namespace std;
class employee{
    int age;
    char name[40];
    public:
    void getData();
    void putData();
   inline void  employee::  getData(){
    cout<<"Enter the age of employee:\n";
    cin>>age;
    cout<<"Enter the name of employee:\n";
    cin>>name;
 }
 inline void employee:: putData(){
    cout<<"the age of employee is "<<age<<endl;
    cout<<"the name of employee is "<<name<<endl;
 }
};
 int main(){
    employee e1;
    e1.getData();
    e1.putData();
 }