// We can acess -class attributes and class method
// Some of the class members are not accessible 
// We need an object to acess the instance variables.

// If we have a pointer to and object.
/*
 * Dereference the pointer then use the dot operator.
 * Account *ram_acc = new Account();
 * (*ram_acc).deposit();
 * Or use the member of the pointer operator (arrow operator).
 * Account *ram_acc = new Account();
 * ram_acc -> balance;
 * */
 
 
// #include<iostream>
// #include<string>
// #include<vector>
// 
// using namespace std;
// 
// class Player{
//public:
//     //attributes
//     string name;
//     int health;
//     int exp;
//     
//     //methods
//     void talk(string text_to_say)
//     {
//       cout<<name<<"says"<<text_to_say<<endl;  
//     };
//     bool is_dead();
// };
// class Account{
//     public:
//     string name;
//     double balance;
//     
//     //methods
//     bool deposit(double bal){
//         balance +=bal;
//         cout<<"Deposited"<<endl;
//     }
//     bool withdraw(double bal){
//         balance -= bal;
//         cout<<"Withdrawn"<<endl;
//     }
//     
// };
// 
// int main(){
//     Player frank;
//     frank.name ="Frank";
//     frank.health = 100;
//     frank.exp =15;
//     
//     Player bob;
//     bob.name="Bob";
//     bob.health =200;
//     bob.exp= 20;
//     bob.talk("Hi there");
//     
//     Account frank_acc;
//     frank_acc.name="Frank";
//     frank_acc.balance=5000;
//     frank_acc.deposit(1000);
//     frank_acc.withdraw(1000);
//     
//     Player *enemy = new Player;
//     (*enemy).name = "Enemy";
//     (*enemy).health=100;
//     enemy ->exp =15;
//     enemy ->talk("I will destroy you");
//     
//     return 0;
// }
 
 //Class members acess modifiers.
 //- Public: Accessible everywhere 
 //- Private: Accessible only to members or friends of the class class.
 
 //Public:
 /*
  * class Class_name{
  * public:
  *     declarations;
  * };
  * */
  
   //Private:
 /*
  * class Class_name{
  * private:
  *     declarations;
  * };
  * */
  
   //Protected:
 /*
  * class Class_name{
  * protected:
  *     declarations;
  * };
  * */
  
//class Player{
//public:
//    //attributes
//    string name;
//    int health;
//    int xp;
//public:
//    //methods
//    void talk (
//        string( text_to_say)){
//            cout <<name<<"says"<<text_to_say<<endl;
//        }
//        bool is_deaad();
//};
//int main(){
//    Player andy;
//    andy.name ="Andy";
//cout<<andy.talk("Hello there!");
//return 0;
//}
