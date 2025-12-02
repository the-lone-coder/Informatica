#include <iostream>
using namespace std;
int main()
{
// Declares the variables used
int arr[20], i = 0, n = 0;

// Gets the value for n
cout<<"Please input a value for n"<<endl;
cin>>n;


// Validates n
if(n>20)
    {
        cout<<"n has a value bigger than the array"<<endl;
        exit(1);
    }

// Gets the input for arr[i]
cout<<"Please input the values for the array"<<endl;
for(i = 0; i<=n-1; i++)
{
    cin>>arr[i];
}    


}