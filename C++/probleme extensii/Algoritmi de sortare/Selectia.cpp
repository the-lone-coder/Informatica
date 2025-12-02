#include <iostream>
using namespace std;
int main()
{

int arr[100], i,n,k,minn,j;
cin>>n;
for(i=0; i <= n; i++)
{
cin>>arr[i];
}


for(i=0; i<= n-2; i++)
{
minn = arr[i]; 
k = i;
	for(j=i+1;j<=n-1; j++)
		{
		if(arr[j]<minn)
			{
				minn=arr[j], k=j;
			}
		}
if (k!=i)
	{
	swap(arr[i],arr[k]);
	}
}


for(i=0; i<=n; i++)
{
cout<<arr[i];
}


}
