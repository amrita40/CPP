 #include<iostream>
using namespace std;

/*arrays: Arrays are used to store multiple values in a single variable, 
            instead of declaring separate variables for each value.
          **OF SAME DATA TYPE**
         To declare an array, define the variable type, specify the name of the array
          followed by square brackets and specify the number of elements it should store:*/
          
int main(int argc, char const *argv[])
{
    // Array Example
    int marks [] = {23, 45, 56, 89};

    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // // You can change the value of an array
    // marks[2] = 455;
    // cout<<"These are marks"<<endl;
    // // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    for(int i=0;i<4;i++){
cout<<"the value of marks "<<i<<" "<< marks[i]<<endl;
    }
    return 0;
}



