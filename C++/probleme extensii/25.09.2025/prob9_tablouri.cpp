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

// Writes the values for arr[n]
for(i =0; i<=n-1; i++)
{
    if(i%2 == 0)
    {
        arr[i] = i;
    }
    else
    {
        arr[i] = 10;
    }
}

// Outputs the values of the array
for(i = 0; i <=n; i++)
{
    cout<<arr[i];
}

}
