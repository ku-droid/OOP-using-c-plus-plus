// Object Oriented Programming


// Four pillars of OOP:
/*
 * Abstraction
 * Polimorphism
 * Encapsulation
 * Inheritance
 */
 
 // Classes and Objects 
 
 // Classes:
 /*
  * It is the blueprint form which objects are created.
  * It is a user defined data-type.
  * It has attributes(data).
  * It also have methods (function).
  * It can hide data from methods.
  * Provides a public interface.
  * */
  
  // Examples of clases.
  /*
   * Account 
   * Employee
   * std::vector
   * */
   
   // Objects:
   /*
    * Created from a class
    * It represents a specific instace of a class.
    * we can create many many objects
    * Each objects have their own identity .
    * Each uses the defined class methods.
    * */
    
    // Examples of objeccts.
    /*
     * Ram's Account.
     * Hari's Account.
     * Each have their own balance,deposits and withdrawl history.
     * 
     * */
     
     
// Declaring a Class:
/*
 * class Class_Name{
   declaration
   };
 * */
 
// class Player{
//     //attributes
//     string name;
//     int health;
//     int xp;
//     //functions
//     voi talk(string);
//     bool is_dead();
// };


#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
  //attributes
string name;
int health;
int xp;

//methods
void talk(string);
bool is_dead();
};
class Account{
    //attributes;
    string name;
    double balance;
    //methods
    void deosit(double);
    void withdraw(double);
};
int main(){
    Player ram;
    Player hari;
    
    Account ram_acc;
    Account hari_acc;
    
    Player player[]{ram,hari};
    
    vector<Player> player_vec{ram};
    player_vec.push_back(hari);
    
    return 0;
}