#include<iostream>
using namespace std;

int c=45; /*global variable*/

int main(){
    /***build in data types*/
// int a,b,c;
// cout<<"a is  :";
// cin>>a;
// cout<<"b is  :";
// cin>>b;
// c= a+b;
// cout<<"the sum is :"<<c<<endl;
// /*for printing the global varaible use :: operator*/
// cout<<"the global var is :"<<::c<<endl;


/****double,float,long literals*/


// float d=34.4f; /*f or F for float*/
// long double e=34.4l; /*l or L is for long double*/
// cout<<d<<endl<<e<<endl;
/*is someone ask what is 34.4 then it will say double value so in order to diff bw double and float for float value use f with the number*/

// cout<<"the size of "<<sizeof(34.4)<<endl;  /*long	4 bytes
//                                             float	4 bytes
//                                             double	8 bytes*/
// cout<<"the size of "<<sizeof(34.4f)<<endl;
// cout<<"the size of "<<sizeof(34.4l)<<endl;

/****refference variable*/
/*AVI---->aanjanay--->nippu all same*/
//  int x=45;
//  int &y=x; /*for giving the same value of x to y we use & sign it acts like a pointer now y is also equal to 45*/
//  cout<<x<<endl;
//  cout<<y<<endl;

/*typcasting*/
// int e=45;
// float f=5.5;
// cout<<"the value of e is :"<<(float)e<<endl;
// cout<<"the value of e is :"<<float(e)<<endl; /*both the lines are same*/
// cout<<"the value of f is :"<<(int)f<<endl;
// cout<<"the value of f is :"<<int(f)<<endl;/*both the lines are same */

// int w=int(e);
// cout<<"The expression is:"<<e+f<<endl;
// cout<<"The expression is:"<<e+(int)f<<endl;

int x=2;

int * y=&x;
cout<<y;

}