#include<iostream>
using namespace std;
class person{
char name[10];
int age;

public:
void getdata();
void display();
};
void person :: getdata(){
cout<<"Enter the name :";
cin>>name;
cout<<"Enter the age:";
cin>>age;

}
void person ::display(){
    cout<<"Name of student is"<<name;
    cout<<"\nage of the student is "<<age;
}
int main(){
    person p;
    p.getdata();
    p.display();
    return 0;
}