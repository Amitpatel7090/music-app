#include<iostream>
using namespace std;
class number{
	int num,a,obj;
	public:
		number(){
		
		}
		number(int num){
			a=num;
		} 									//This program for coppying constructor!!!
		      							
		      							
		
//		number(number
//		&obj){
//			cout<<"Copy constructer is called:"<<"\n";
//			a=num;
//			a=obj.a;
//		}
	void display(){
		cout<<"The  number is :"<<a<<"\n";
		
	}
};

int main(){
	number x,y,z(40);
x.display();
y.display();
z.display();
number z1(z);
number z2(z);
z1.display();
z2.display();
return 0;
}

