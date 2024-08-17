#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={2,3,6,5,10};
    
    int k;

    cin>>k;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==k){
            cout<<"the searched no. is "<<arr[i]<<endl;
        }
    
            
        
    }
    
cout<<"the no. is found in the array"<<endl;
    return 0;
}
