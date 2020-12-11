//// Copy Constructor 
///*
// *  when objects are copied c++ must create a new object from an existing object.
// * when is a copy of object made?
// *      Passing objects by value as a parameters.
// *      Returning an object form a function by value .
// *      Constructing one object based on onother of same class.
// * C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you dont.
// * 
// * */
// 
// Welcome guest1;
// string Greetings( guest 1);
// 
// int add (int a,int b)
// {
//     return a*b;
// }
// void main()
// {
//     int x = 50;
//     int y =100;
//     cout <<add(x,y);
// }
// 
// 
// //Usecase 1:
// // When we pass an object to a function or method by value.
//// Object creation and initialization
//Player hero{"Hero",100,20};
//
//// Function declaration using object as parameters
//
//void display_player{Player p}
//{
//    //p is the copy of hero in this example
//    //destructor of p will be called.
//}
////Function call using the object as argument.
//display_player(hero);
//
//
//
//// Usecase ||;
//
////Object creation 
//Player enemy;
//
////Function declaration with Player class type
//Player create_super_enemy(){
//    Player an_enemy{"Super_enemy",1000,1000};
//    return an_enemy;//Copy of an enemy is returned
//}
//enemy = create super_enemy();
//
////Usecase |||:
//Player hero {"Hero",100,100};
//Player another_hero{hero};//A copy of hero is made