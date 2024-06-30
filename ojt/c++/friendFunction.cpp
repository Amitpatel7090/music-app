#include<iostream>
using namespace std;
class B;
class A{	
private:
	int numA;
				public:
		void setA(){ 						//method of class A
			numA=15; 
		}
		friend int add(A,B);
		};
		
class B{
	private:
	
	int numB;
		public:

		void setB(){    		//method of class B
			numB=55; 
		}
		friend int add(A,B);
};
int add(A a ,B b){  		 //Friendly fuinction;
	return (a.numA+b.numB);
}
int main(){
A a;
B b;  				 //Creating objects;
	a.setA();
	b.setB();
	cout<<"Addition is:"<<add(a,b);
	return 0;
}
