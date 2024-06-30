#include<iostream>
// using namespace std;
// class papa{
//     public:
//      void display(){
//         cout<<"Papa\n";
//     }

// };
// class child: public papa{
//     public:
//     void display(){
//         cout<<"Child\n";             //Exemple  of function overloading
//         papa::display();

//     }

// }; 
// int main(){
//     papa p;
//     child c;
//     // p.display();
//     c.display();
//     return 0;
// }#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
 cout<<"Int:" << myNum1 << "\n";
  cout<< "Double: " << myNum2;
  return 0;
}
