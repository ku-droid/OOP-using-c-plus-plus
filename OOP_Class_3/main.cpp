// Implementing member methods 
// Very similar to how we implement the functions .
// Member methods have acess to member attributed.(so you dont need to access them as argument.)
// Can be implemented inside the class declaration(implicity inline)
// Can be implemented outside the class declaration.
//---> Need to use Class_Name::method_name
// Can separate specificartion from implementation.
// ->.h file for class declaration.
// -> .cpp file for the class implementation.


//class Account{
//  private:
//  double balance;
//public:
//  void set_balance(double bal){
//      balance =bal;
//  }
//  void get_balance(){
//      return balance;
//  }
//};
//

//class Account{
//private:
//    double balance;
//public:
//    void set_balance(double bal);
//    double get_balance(double bal);
//    
//};
//void Account::set_balance(double bal)
//{
//    balance =bal;
//}
// double Account::get_balance(double bal)
//{
//    return balance;
//}
//
#include<iostream>
#include<string>
using namespace std;
class Account{
private:
    string name;
    double balance;
public:
void set_balance(double bal){balance =bal;}
double get_balance(){return balance;}

void set_name(string n);
string get_name();

bool deposit(double amount);
bool withdraw(double amount);
};

void Account :: set_name(string n){
    name=n;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    balance += amount;
return true;}

bool Account::withdraw(double amount)
{
    if(balance - amount >=0){
        balance -=amount;
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Account frank_acc;
    frank_acc.set_name("Frank");
    frank_acc.set_balance(10000.0);
    if (frank_acc.deposit(200.0))
    cout<<"Deposit sucessful"<<endl;
    else
        cout<<"Deposit not accepted"<<endl;
    if (frank_acc.withdraw(5000.0))
        cout <<"withdraw succesful";
    else
        cout<<"withdraw failed fund not enough";
}


//Constructor
//Special member method that is invoked during object creation.
//Useful for initialization.
//Same name as the class.
//No return type is specified.
//Can be overloaded.


class Player{
private:
    string name;
    int health;
    int xp;
public:
    //overloaded constructor
    Player(string name);
    Player(string name,int health,int xp);
};

// Destructor 
// Special member method used when object goes out of scope.
// Same name as class proceded with a tilde(~),
// Invoked automatically when an object is destroyed .
// Only destructor is allowed per class - cannot be overloaded.
// Useful to release memory and other resources .

//class Player{
//private:
//    string name;
//    int heath;
//    int xp;
//public:
//    Player();
//    Player(string name);
//    Player(string name,int health,int xp);
//    ~Player();
//    
//};
//Player frank();
//Player bob("bob");
//Player andy("Andy",100,5000);