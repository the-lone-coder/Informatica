#include <iostream>
using namespace std;
int main()
{
// Declares the variables n, m
int i,k,n,m;

// Reads the n, m variables
cout<<"n = "<<endl;
cin>>n;
cout<<"m = "<<endl;
cin>>m;

// Checks if n > 10 or m > 15 
if(n > 10 || m > 15)
    {
        cout<<"n > 10; m > 15";
        exit(1);
    }
 
// Declares the array
int arr[n][m];

// Gets the data values for the collumns and rows
for(i=0; i<m; i++)
    {
      for(k=0; k<n; k++)
        {
            cin>>arr[k][i]; //a KIAAAAAAAAAAAAAAAA
        }  
    }

// Declares the min and max variables
int  sum = 0, minn = arr[1][2], maxx = arr[2][2];

// Finds the min/max and sum of all numbers
for(i=0; i<m;i++)
    {
        for(k=0; k<n; k++)
            {
                if(arr[k][i] > maxx /*KIAAAAAAAAAAA*/)
                    {
                        arr[k][i] /*KIAAAAAAAAAAA*/ = maxx;
                    }
                if(arr[k][i] < minn)
                    {
                       minn = arr[k][i]; 
                    }
                    
                sum += arr[k][i];
            }
    }

// Declares the maxc variables
int maxc = arr[1][1];
for(k = 0; k<m; k++)
    {
        for(i = 0; i<n; i++)
            {
                if(arr[i][k] > maxc)
                    {
                        maxc = arr[i][k];
                    }
            }
    }
// Sorts the array DOESN'T WORK , ADMIN PLS FIX
for (i = 0; i < n; i++) {
        for (int pass = 0; pass < m - 1; pass++) 
            {
                for (k = 0; k < m - pass - 1; k++) 
                    {
                        if (arr[i][k] < arr[i][k + 1]) 
                            {
                                int temp = arr[i][k];
                                arr[i][k] = arr[i][k + 1];
                                arr[i][k + 1] = temp;
                            }
                    }
            }
    }    



    
// Outputs the maximum/min/max per collumn/sum of all values value 
cout<<"Valoarea max: "<<maxx<<endl;
cout<<"Valoarea max: "<<minn<<endl;
cout<<"Valoarea max: "<<sum<<endl;
cout<<"Valoarea max pe coloana: "<<maxc<<endl;

// Outputs the value of the sorted array
for(i=0; i<m; i++)
    {
      for(k=0; k<n; k++)
        {
            cout<<arr[k][i]; //a KIAAAAAAAAAAAAAAAA
        }  
    }

}
