#include<iostream>
using namespace std;
class papa{
    public:
    string company="Adidas";
}
;
class child:public papa{
    public:
    string school="ssgk";    // inherite base class to derived class.

                                //papa is base class and chid is derived class;
};
int main(){
    papa p;
    child c;
    p.company;
    cout<<p.company<<"\n";
    cout<<c.company;
}
