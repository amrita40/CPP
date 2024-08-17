#include<iostream>
using namespace std;
/*structure:user define data type*/

 typedef struct employee /* by adding typedef and below mentioned ep is the shortcut for avoiding struct employee*/
{
    int salary;
    int id;
    char fav;
} ep;


int main()
{
                         /*after typedef and ep ur code will be */
struct employee harry;      /*ep harry*/
struct employee  avi;    /*ep shubham*/
avi.salary=1400000;
avi.id=1;
avi.fav='A';

cout<<avi.salary <<avi.id <<avi.fav<<endl;




    return 0;
}
