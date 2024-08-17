/*imp dont use , & in vs code in writing the file name*/
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=4;
    // cout<<a<<endl;
    //  a=6; /*here the value of a has changed to 6*/
    // cout<<a<<endl;

    //         /*"CONSTANTS IN C"*/

    // const int b=45;
    //  cout<<b<<endl;
    //    b=46;  // this will throw error as b is declared as constant then its value will not change
//   cout<<b<<endl;


/*Manipulators: Manipulators are helping functions that can modify the input/output stream. It does not mean 
that we change the value of a variable, it only modifies the I/O stream using insertion (<<) and extraction (>>) operators. 

Manipulators are special functions that can be included in the I/O statement to alter the format parameters of a stream. 
Manipulators are operators that are used to format the data display.
To access manipulators, the file iomanip.h should be included in the program.
 */

/* from CWH

 endl:It is used to enter a new line with a flush.

setw(a):It is used to specify the width of the output.

setprecision(a):It is used to set the precision of floating-point values.

setbase(a):It is used to set the base value of a numerical number.*/

// #include <iostream>
// #include <iomanip> (it is included for using manipulators)
// using namespace std;
 
// int main()
// {
    // float PI = 3.14;
    // int num = 100;
    // cout << "Entering a new line." << endl;
    // cout << setw(10) << "Output" << endl;
    // cout << setprecision(10) << PI << endl;
    // cout << setbase(16) << num << endl; //sets base to 16

// Output:

// Entering a new line.
//     Output
// 3.140000105
// 64
  

                        /*operator precedence*/
          /*do read the article once for this */




    
}
