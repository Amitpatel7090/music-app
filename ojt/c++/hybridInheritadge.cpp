#include<iostream>
#include<string.h>
using namespace std;
class Vehicle{
    public:
        char name[20];
        int wheels,w;
    void setName(char n[]){
        strcpy(name,n);
    }
    void getName(){
        cout<<"Vehicle Name:"<<name<<endl;
    }
};
class Wheels:public Vehicle{
    public:
        void setWheels(int w)
        {
            wheels=w;
        }
        void getWheels()
        {
            cout<<"Wheels are:"<<wheels<<endl;
        }
};
class Car:public Wheels{
    public:
        void setdetails(char name[],int wheels)
        {
            setName(name);
            setWheels(wheels);
        }
        void display()
        {
            getName();
            getWheels();
        }
};
int main(){
    Car c;
    c.setdetails("Supra",50);
    c.display();
    return 0; 
}