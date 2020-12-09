#include<iostream>
#include<string>
using namespace std;
//class Player{
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    void set_name(string name_val){
//        name=name_val;
//    }
//    //Overloaded constructor
//    Player(){
//        cout<<"No args constructor"<<endl;
//    }
//    Player(string name){
//        cout<<"Single args constructor"<<endl;
//    }
//    Player(string name ,int health ,int xp){
//        cout<<"Three args constructor"<<endl;
//    }
//    ~player(){
//        cout<<"Destructor called for"<<name <<endl;
//    }
//    
//};
//
//int main(){
//    {
//    Player slayer;
//    slayer.set_name("Slayer");
//    }
//    {
//    Player frank;
//    frank.set_name("Frank");
//    Player hero("Hero");
//    hero.set_name("Hero");
//    Player villain("Villain",100,15);
//    villain.set_name("Villain");
//    }
//    
//    
//    
//    return 0;
//}
// Constructor types:

// Default Constructor (No args constructor)
/*
 * Doesnot accept any arguments.
 * If you write no constructor at all for a class,
   C++ will generate a default constructor that does nothing.
 * It is called when you initialize a new object with no arguments. 
 */
 
 class Account{
private:
     string name;
     double balance;
public:
     Account(){
         name ="Name";
         balance=0.0;
     }
     string get_name(){
         return name;
     }
     bool withdraw(double amount);
     bool deposit(double amount);
     
 };
 int main(){
     Account jimmy;
     cout<<jimmy.get_name();
 }
 
 