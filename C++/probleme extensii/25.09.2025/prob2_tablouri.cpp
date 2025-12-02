#include <climits>
#include <iostream>
using namespace std;
int main()
{
int n, i, maxx = 0, minn = INT_MAX;

// Gets the value for n
cout<<"Input the value for n"<<endl;
cin>>n;

//Declares and gets the input for the array
int arr[n];

for(i=0; i<=n-1; i++)
    {
    cin>>arr[i];
    }

//Checks for and finds the lowest and biggest element in the array
for(i=0; i<=n-1; i++)
    {
        if(maxx < arr[i])
        {
            maxx = arr[i];
        }
    } 
for(i=0;i<n;i++)
    {
        if(minn > arr[i])
       {
            minn = arr[i];
       }
    }
 
cout<<"The smallest element in the array is: "<<minn<<endl;
cout<<"The largest element in the array is: "<<maxx<<endl;
}