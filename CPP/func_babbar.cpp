#include<iostream>
using namespace std;
//func are the set of code which performs something for you
//func are used to modularise the code 
//func are used to increase readability
//func are used to use same code multiple times
//types of func
//i)void-> returns u nothing
//ii)return
//iii)parameterised ->it takes user input 
//iv)non parameterised
 

 //example of non PARAmeterised 
// void printname(){
//     cout<<"hey hello this is me amritanshu sinha";
// }
// int main(int argc, char const *argv[])
// {
//     printname();
//     return 0;
// }


 //example of parameterised func
// void printname( string name){
// cout<<"hey this is  "<<name;
// }

// int main(int argc, char const *argv[])
// {
// string name;
// cin>>name;
// printname(name);
// string name2;
// cin>>name2;
// printname(name2);

//     return 0;
// }

//take 2 number and print its sum// 
//instead of void it can be int or other data type

// void sum(int a, int b){
// cout<<"the sum is "<<a+b;
// }

//  int main(int argc, char const *argv[])
//  {
//     int a,b;
//     cin>>a>>b;
//     // cin>>b;
//     sum(a,b);
//      return 0;
//  }


//some in-built func
//to find the minimum of the given number
//to find the maximum of the given number
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cin>>a>>b;

//     int mini=min(a,b);
//     cout<<mini<<endl;
//   //return 0; dont write this over here as it will not let to execute the another statement 
//     int maxx=max(a,b);
//     cout<<maxx<<endl;
// return 0; //instead write here
// }

//making func for finding min and max

// int mini_maxx(int a,int b){
// if (a>b){
//     // cout<<"maxx";
//     return a; //always give a return value in the func
// }
// //elsef
// // cout<<"mini";
 
// }

// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cin>>a>>b;
//    int maxx= mini_maxx(a,b);
//     cout<<maxx;
// }

//pass by value//

// void dosomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(int argc, char const *argv[])
// {
//     int num=5;
//     dosomething(num);
//     cout<<num; // this line print the same num value i.e 5 which is been saved in the mem.
//     return 0;
// }

//just reffer func by  refference value from striver

