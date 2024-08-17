/*there are 2 types of header files
1. system header file: it comes with the complier itself 
eg: #include<iostream>
2.user defined header files: it is written by the programmer.
eg:#inlcude "this.h" (this will produce error if this.h 
                      files is not there in the dictory means in the folder
                       where the files are present.)
*/
#include<iostream>
using namespace std;
#include "this.h"
int main(){
    int a,b;
    cin>>a ;
    cin>>b;
    /*for understanding the key points put the value of a=2,b=3*/
    cout<<"hey"<<endl;//endl is used to give new line or use \n.
cout<<"hello"<<endl;
/*ARITHMETIC OPERATORS*/
// cout<<"sum is: "<<a+b<<endl;
// cout<<"sum is: "<<a*b<<endl;
// cout<<"sum is: "<<a/b<<endl;
// cout<<"sum is: "<<a-b<<endl; 
// cout<<"sum is"<<a++<<endl; /*sbse pehle a print hoga and a ki value increase hogi 1 se. a entered value is=2 and actual value becomes 3*/
// cout<<"sum is"<<a++<<endl; /*now value of a is 3 and acutual value is 4*/
// cout<<"sum is"<<a--<<endl; /*sbse pehle a print hoga and a ki value decrement hogi 1 se. now value of a is 4 but acutal value will be 3*/
// cout<<"sum is"<<a--<<endl;
// cout<<"sum is"<<++a<<endl; /*pehle print increment then print a*/
// cout<<"sum is"<<--a<<endl; /*/*pehle print increment then print a*/

/*assignment operators used to assign values to varaible*/
// int c=3;
// int d=5;

/*camparison operator used to campare*/


cout<<"the value of a<b \n"<<(a<b)<<endl; /*use of parenthesis is mandatory for the complier to diff bw the operator*/
cout<<"the value of a>b\n"<<(a>b)<<endl;
cout<<"the value of a!=b\n"<<(a!=b)<<endl;
cout<<"the value of a>=b\n"<<(a>=b)<<endl;
cout<<"the value of a<=b\n"<<(a<=b)<<endl;
 /*LOGICAL OPERATOR*/

cout<<"the value of a<b && a!=b is "<<((a<b) && (a!=b))<<endl; /*(a<b) && (a!=b)<<endl; this will throw an error*/
                                                                /*((a<b) && (a!=b))<<endl; this will not so use the parenthesis */





                                                                
}
