//#include<iostream>
//using namespace std;
//
//class A{
//    int a,b;
//public:
//    int add(int a,int b)
//    {
//        return a+b;
//    }
//};
//class B:public A{
//    
//};
//class C:private A{
//    
//};
//int main()
//{
//    B objb;
//    C objc;
//    cout<<objb.add(10,20)<<endl;
//    cout<<objc.add(10,20)<<endl;
//}
#include<iostream>
using namespace std;

class Base{
    int x;
public:
    //default constructor
    Base(){
        cout<<"Base default constructor"<<endl;
    }
};
class Derived:public Base{
    int y;
public:
    //default constructor
    Derived(){
        cout<<"Derived default constructor"<<endl;
    }
    //parameterized constructor
    Derived(int i)
    {
        cout<<"Derived parameterize constructor"<<endl;
    }
};

int main()
{
    Base b;
    Derived d1;
    Derived d2(10);
    return 0;
}

//To initialize the inherited data members,constructor is necessary and thats 
//why the constructor of the base class is called first 