#include<iostream>

using namespace std;

	class person{
		char name[10];
		int age;
		
		public:
			person(){                    //constructor
			 cout<<"Enter the name:";
 			cin>>name;								
	 
 	cout<<"Enter the age:";
 	cin>>age;
			}
	void getdata();
		
		
		void display();
	};
//  void person::getdata(){
	
// 	 cout<<"Enter the name:";
// 	cin>>name;
	 
// 	cout<<"Enter the age:";
// 	cin>>age;
// }
//    void  person ::display (){
//  	cout<<"Name is :\n"<<name<<"\n";
//  	cout<<"\nAge is "<<age<<endl;
//  }
 
 int main(){
 	person p;
	// p.getdata();
 	p.display();
 	return 0;
 }
