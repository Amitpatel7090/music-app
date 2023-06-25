// #include<iostream>
// using namespace std; // program  for constructer with argument;
// class integer{
// int m,n;
// public:
// integer(int,int);
// void display(){
// cout<<"m="<<m<<"\n";
// cout<<"n="<<n<<"\n";
// }
// };
// integer::integer(int x,int y){
// m=x;
// n=y;
// }
// int main(){
//     integer int1(5,100);             //create an object
//     integer int2=integer(45,95);
//     cout<<"Object 1:"<<"\n";
//     int1.display();
//     cout<<"Object 2:"<<"\n";
//     int2.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class myClass{
    public:
    string name;
    string model;
    int year;
    myClass(string x,string y,int z){
     name = x;
     model = y;
        int year = z;

    }
}; 
int main(){
    myClass c("BMW","V12",1995);
   myClass c1("Merci","VA",1895);
  
cout<<c.name<<"\n";
cout<<c.model<<"\n";
cout<<c.year<<"\n";
cout<<c1.name<<"\n";
cout<<c1.model<<"\n";
cout<<c1.year<<"\n";
return 0;
  
  
}