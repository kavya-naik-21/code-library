#include <iostream>

using namespace std;

class A{

public:

    int a;

    void setA(int x){

    a=x;

    }

    int getA(){

    return a;

    }

};

int main(){

A obj;

obj.setA(10);

cout<<obj.getA()<<"\t";

A obj1;

obj1=obj;

obj.setA(100);

cout<<obj1.getA();

return 0;

}