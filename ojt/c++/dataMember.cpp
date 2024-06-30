#include<iostream>
using namespace std;
int a,num;
class item{
	static int count;
	public:
		void getdata(int a){
		a=num;
		count++;
		}
		void getcount(){
		cout<<"Count is :"<<count;
	}
	};
	int main(){
		item i1,i2,i3;
		
		i1.getcount();
		i2.getcount();
		i3.getcount();
		i1.getdata(123);
		i2.getdata(124);
		i3.getdata(125);
		cout<<"After getting data:";
		i1.getcount();
		i2.getcount();
		i3.getcount();
		return 0;
		
	}
