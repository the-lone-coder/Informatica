#include <iostream>
using namespace std;
int main()
{

int arr[100], x, i,n,k,minn,j;
cin>>n;

/*Inserts values in the array*/
for(i=0; i <= n; i++)
{
cin>>arr[i];
}

for ( i=1;  i<=n-1; i++) 
{   
x=arr[i];   
j=i -1;
while (j>=0  &&  x<arr[j]) 
{
arr[j+1] = arr[j];
j--;
}

arr[j+1]=x;
}


/*prints out the sorted array*/
for(i=0; i<=n; i++)
{
cout<<arr[i];
}


}
