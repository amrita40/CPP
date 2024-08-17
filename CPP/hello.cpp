// basic structure of c++
//iostream means input stream and output stream
#include <iostream> //header file// iostream have several function thats why it is included
using namespace std;

int glo=6; //global varaible

void add(){
    int a=4; //local variable >>global var it gets more preceedence than global
    cout<<glo; //<< is called insertion operator
}
int main() {
    int sum=9; /* int,float,char,double,boolean return types*/
 float F = 3.2F;
 double D=6.455487844;
bool b=true;
char c='add';
int glo=45;

add();
cout<<"\n"<<glo;
cout<<"\n"<<b;
 
    // cout << "Hello World!"<<"\n"<<sum<<"\n"<<F;
    // cout<<"\n"<<sum;
    return 0;

}

//variable scope: jis jagah par variable located hai.

/*local varaible: are declared inside the braces
                 of any function and can be accessd from there only*/

/*global variable: declared outside any func and 
                   can be accessed from anywhere*/


/*CAN LOACAL AND GLOBAL VARIABLE 
           HAVE SAME NAME===YES THEY CAN HAVE SAME NAME*/




