#include<iostream>
using namespace std;
int count;
class Num{

	
	
	public:	~Num(){cout<<"Destructer called:"<<count<<"\n";
	count++;
}
		Num(){
	count++;
	cout<<"Constructer is called:"<<count<<"\n";
		}
};
int main(){
	cout<<"Inside main"<<"\n";
	cout<<"Creating first objects:"<<"\n";
	Num n1;{
	cout<<"Creating second object: "<<"\n";
	Num n2,n3;
}
cout<<"Back to main"<<"\n";
	
	
return 0;}
