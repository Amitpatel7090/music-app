#include<iostream>
using namespace std;
 class myClass{
    public:
    int x;
    private:
    int y;
     
 };
 int main(){
    myClass c;  //The error shows that the variabele "Y" is private;
    c.x = 34;
    c.y = 45;
    cout<<c.x;
    cout<<c.y;
    return 0;
 }