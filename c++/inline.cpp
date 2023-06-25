#include<iostream>
using namespace std;

	class set{
		int m,n;
		public:
			void intput();
			void largest();
			
	};
	void set::intput(){
		cout<<"Enter the  value of m:";
		cin>>m;
		cout<<"Enter the  value of n:";
		cin>>n;
		
	}
	void set::largest()
	{
		if(m>n){
			cout<<m<<" is  largest num:";
		
		}
	else{cout<<n<<" is largest number";
	
}
	}
	int main() {
		
		set s;
		s.intput();
		s.largest();
		
	return 0;	
		
	}
