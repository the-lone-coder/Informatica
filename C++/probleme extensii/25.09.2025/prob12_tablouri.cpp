#include <iostream>
using namespace std;
int main()
{
// Declares the main variables used
int i = 0, n = 0;

// Gets the value for n
cout<<"Please input the value of n"<<endl;
cin>>n;

// Declares all of the arrays
int arrA[n], arrB[n], arrC[2*n];

// Gets the values for arrA and arrB
cout<<"Please input the values for arrA"<<endl;
for(i = 0; i<n-1; i++)
{
    cin>>arrA[i];
}

cout<<"Please input the values for arrB"<<endl;
for(i = 0; i<=n-1; i++)
{
    cin>>arrB[i];
}

// Copies the values of arrA to the odd indexes of arrC and the values of arrB to the even indexes of arrC
for(i = 0; i<2*n; i++)
{
    if(i%2==0)
    {
        arrC[i]=arrB[i];
    }
    else 
    {
        arrC[i]=arrA[i];
    }
}

// Displays the final array
cout<<"The values of arrC are:"<<endl;
for(i = 0; i <2*n; i++)
{
    cout<<arrC[i];
}

}