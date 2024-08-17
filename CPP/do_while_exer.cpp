#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // int i=1;
    // do
    // {
    //     cout<<"6*"<<i<<"="<<6*i<<endl;
    //     i++;
        
    // } while (i<=10);
    
 /*for writing any tablr given from the user using do while loop*/
int a=1,b;
cin>>b;
cout<<b<<endl;
do
{
    cout<<b<<"*"<<a<<"="<<b*a<<endl;
    a++;
} while (a<=10);



    return 0;
}
