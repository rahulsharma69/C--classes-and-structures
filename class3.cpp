#include <iostream>
using namespace std;
class Class_name
{
    int item;
    int price;

public:
    void getdata(int a, int b);
    void putdata();
   
};
void Class_name:: getdata(int a, int b)
    {
        item = a;
        price = b;
    }
 void Class_name:: putdata()
    {
        cout << " no. of item is " << item << "and price of this item  is " << price;
    }
int main()
{
    Class_name obj1;
    int a,b;
    cout<<"enter the no. of items and price of this items:\n";
    cin>>a>>b;
    obj1.getdata(a , b);
    obj1.putdata();
}