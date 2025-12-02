#include <iostream>
using namespace std;
int main()
{
// Declares the integer variables
int n=0, i=0, y = 0, a = 0, b = 0;

// Gets the value for n and declares arr[n]
cout<<"Please input the value of n:"<<endl;
cin>>n;
int arr[n];

// Gets the values for arr[n]
cout<<"Please input the values of the array: "<<endl;
for(i =0; i<=n-1; i++)
{
    cin>>arr[i];
}

// Reverses the array
for(i = 0; i<n/2; i++)
{
    swap(arr[i], arr[n-i-1]);
}

// Outputs the reversed array
cout<<"The reversed array is"<<endl;
for(i = 0; i<n; i++)
{
    cout<<arr[i];
}
}