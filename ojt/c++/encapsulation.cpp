#include<iostream>
using namespace std;
class  Employee{
    private:
    int salary;
    public:
    int setsalary(int s){       //set method
        salary=s;
    }
    int getsalary(){            // get method
            return salary;
        }

    
};
int main(){
     Employee e;
     e.setsalary(5000);   //  input data by calling set method
     cout<<e.getsalary();  // output data by callinng get method;
      return 0;
}