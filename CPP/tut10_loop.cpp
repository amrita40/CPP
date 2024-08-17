#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   /*there are 3 types of loops in cpp
   1. for
   2. while
   3.do while */ 

  /*FOR LOOP*/
// int i=1;
// cout<<i;
// i++; //not a good appproach for printing //

// syntax: for(initialization;condition;updation)
//{
//loop body(c++ code);
    // }

// for (int i = 0; i < 11 /*or i<=11*/; i++)
// {
// cout<<i<<endl;
// //i++; /* never write i++ here in for loop otherwise it will print 1,3,5 instead of 1,2,3...*/

// }
 /*infinite for loop 
 for(int i=0;34 <=40;i++) 
{
cout<<i<<endl;
}
 */

//while loop in c++//
//syntax:
//while(condition)
//  {
//     c++ code statements;
//  }
// int i=1;
 
// while ( i<=40) //dont write  int i<=40 it will throw error
// {
//     cout<<i<<endl;
//     i++; 
// }

/*infinite while loop*/

// int i=1;
// while (true) when condition always true
// {
//     cout<<i<<endl;
//     i++;
// }
  

  /* do while loop*/
//   int i=1;
//  do
//  {
//     cout<<i<<endl;
//     i++;      /*perform these line of codes*/
//  } while (i<=40); /*condition true,false ya koi bhi statement ho loop ek bar toh chalega hi*/
 
 /*infinte do while loop*/
 int i=1;
do
{
    cout<<i<<endl;
    i++;
} while (true); //or(false) ek baar chalega loop.
 /*while and do while me diff is that ki do while me ek baar toh chalega hi 
  loop then condition check krega but while pehle condn check krega then chlega*/

/*While Loop: from chatgpt

In a "while" loop, the loop condition is evaluated before the execution of the loop body.
If the condition is false initially, the loop body may not execute at all. 

 Do-While Loop:

In a "do-while" loop, the loop body is executed at least once, and then the condition is checked.
If the condition is false after the first execution, the loop will exit. 
Otherwise, it will continue executing as long as the condition is true.*/

    return 0;
}
