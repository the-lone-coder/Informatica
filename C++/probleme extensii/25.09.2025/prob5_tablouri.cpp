#include <iostream>
using namespace std;
int main()
{
// Declares the integer variables
int n=0, i=0, y = 0, cy = 0;

// Gets the value for n and declares arr[n]
cout<<"Please input the value of n:"<<endl;
cin>>n;
int arr[n];

// Gets the values for arr[n]
cout<<"Please input the values for the array:"<<endl;
for(i=0; i<=n-1;i++)
    {
        cin>>arr[i];
    }

// Gets the value for y
cout<<"Please input the values for y"<<endl;
cin>>y;

// Finds the position of y
for(i=0; i <= n; i++)
    {
        if(y == arr[i])
        {
          cy = i;
          cout<<"The position of y is: "<<cy<<endl;  
          break;
          
        }

    }

}