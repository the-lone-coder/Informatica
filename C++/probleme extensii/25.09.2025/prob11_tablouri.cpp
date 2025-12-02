#include <iostream>
using namespace std;
int main()
{
// Declares the variables used
int i = 0, n = 0, maxx = 0, mcount = 0;

// Gets the value for n
cout<<"Please input a value for n"<<endl;
cin>>n;


// Declares arr[n]
int arr[n];


// Gets the input for arr[i]
cout<<"Please input the values for the array"<<endl;
for(i = 0; i<=n-1; i++)
{
    cin>>arr[i];
}    

// Runs over the array and finds the maximum value
for (i = 1; i<n; i++)
{
    // Checks to find the largest element
    if(arr[i]>maxx)
        {
            maxx = arr[i];
            // Resets the count if a new element is found
            mcount = 1;
        }
    else if(arr[i] == maxx)
        {
            mcount++;
        }
}        
// Displays the counter and the maxx element
cout<<"The largest element in the array: "<<maxx<<endl;
cout<<"This element is found "<<mcount<<" times in the array"<<endl;        


}