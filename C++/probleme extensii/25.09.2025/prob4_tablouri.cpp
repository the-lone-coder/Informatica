#include <iostream>
using namespace std;
int main()
{
// Declares the integer variables
int n=0, i=0, sum = 0, dif = 0, prod = 1;

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

// Finds the sum, difference and product of all the positive integers in the array
for(i=0; i<n; i++)
    {
    if(arr[i]>0)
        {
            sum += arr[i];
            dif = dif - arr[i];
            prod = prod * arr[i];
        }
    }

//Outputs the values of the sum, dif and prod variables
cout<<"The sum of all positive integers:  "<<sum<<endl;
cout<<"The difference of all positive integers:  "<<dif<<endl;
cout<<"The product of all positive integers:  "<<prod<<endl;
}