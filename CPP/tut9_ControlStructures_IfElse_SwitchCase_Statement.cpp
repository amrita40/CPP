#include<iostream>
using namespace std;
 /*reffer notes first*/
int main(int argc, char const *argv[])
{
    /*selection control str (if-else ladder i.e many if else condition)*/
    int age;
cout<<"the age is :";
cin>>age;
// if(age>18){

//     cout<<"capable for driving";
// }

// else if(age==18){
//     cout<<"can drive";
// }

// else{
//     cout<<"not eligible for driving";
// }
//     return 0;


    /* selection control str : switch case statement*/

switch (age) //write switch and pree enter for the format if switch case in vs code//
{
case 18 /* constant-expression */: // when u will enter the constat expreesion as its 18 over here u will get the result as you'r 18//
  cout<<"you'r 18"<<endl;  /* code */
    break; //jaha pr ho usko thodh kr bahar nikal jao//
case 1 /* constant-expression */:
  cout<<"you'r 1"<<endl;  /* code */
    break;

default:
cout<<"no special cases"<<endl;
    break; 
    //if u remove break from every statement then it will print all the other statement also it will not stop so if ur condition matches
    //then apply break on every case.3


}





}
