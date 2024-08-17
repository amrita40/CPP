#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*pointers:  a pointer is a variable that stores the memory address of another variable. 
                    It points to the location of a variable in memory.

*/

int a=3;
int *b= &a; //b me a ka address stored hai//

// //&... address of operator
// cout<<"add of a is : "<<&a<<endl;
//  cout<<"add of b is : "<<b<<endl; // both the lines will give the same output//

// //*...(value at operator) or dereference of operator
//  cout<<"value at b is :"<<*b<<endl;

/*pointer to pointer*/

int **c;
c=&b;
cout<<"the add of b :"<<&b<<endl;
cout<<"the add of b :"<<c<<endl;
cout<<"the value at address c :"<<*c<<endl;
cout<<"the value at address value_at(value_at(c)):"<<**c<<endl;








    return 0;
}
