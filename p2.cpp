#include<iostream>
using namespace std;
struct structure_name{
    int hours;
    int minute;
    int seconds;
    void getdata();
    void putdata();
};
void structure_name:: getdata(){
    cout<<"enter the times in hours,minutes and time:\n";
    cin>>hours;
    cin>>minute;
    cin>>seconds;
}
void structure_name:: putdata(){
    int totalseconds;
    totalseconds=(hours*3600+minute*60+seconds);
    cout<<"the value of times in seconds only is "<<totalseconds<<"\n";
  
}

int main(){
     structure_name obj1;
     obj1.getdata();
     obj1.putdata();

}