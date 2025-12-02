#include <iostream>
using namespace std;
int main()
{
// Declares the arrays and counter variables
int arrA[10] = {0}, arrB[10] = {0}, i,n;

// Gets the value for n
cout<<"Input the value for n"<<endl;
cin>>n;

// Gets the values for the arrA
cout<<"Input the values for arrA"<<endl;;
for(i = 0; i <= n-1; i++)
{
    cin>>arrA[i];
}

// Copies the values of arrA to arrB
for(i = 0; i<n; i++)
{
    arrB[i]=arrA[i];
}
// Outputs the values of both arrays
cout<<"The values of arrA"<<endl;
for(i = 0; i <= n-1; i++)
{
    cout<<arrA[i]<<endl;
}

cout<<"The values of arrB"<<endl;
for(i = 0; i <= n-1; i++)
{
    cout<<arrB[i]<<endl;
}
}