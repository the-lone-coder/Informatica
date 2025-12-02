#include <iostream>
using namespace std;
int main()
{

int arr[100], i , n = 0,j;
cin>>n;

/*Inserts values in the array*/
for(i=0; i <= n; i++)
{
cin>>arr[i];
}

for ( i=1; i<=n-1; i++)
{

for (j=0; j<=n-2; j++)
{

    if( arr[j+1]< arr[j])   
        {
            swap(arr[j], arr[j+1]);
        }
            
}

}       // tabloul se va sorta crescator

/*prints out the sorted array*/
for(i=0; i<=n; i++)
{
cout<<arr[i];
}
}
