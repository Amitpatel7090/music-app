#include<iostream>
using namespace std;
class area{  //This is a class
    float length;
    public:
    void squarearea();//This are methods
    void display();
};
void area::squarearea(){
    cout<<"Enter the one side of the square :";
    cin>>length;
}
void area::display(){
    cout<<"Area of the squre is :"<<length*length;
    cout<<"squareMeter";
}
int main()
{
    area a;
    a.squarearea();//Calling objects.
    a.display();
    return 0;

}