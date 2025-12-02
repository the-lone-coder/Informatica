#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector <int> IntVector;
IntVector A, B, AUB, A_B, B_A;
int i,n,m,x;
bool gasit;
int main()
{
// Gets the variables for n, m
cout<<"Input the value for n (Card(A))"<<endl;
cin>>n;
cout<<"Input the value for m (Card(B))"<<endl;
cin>>m;

// Gets the values for A and B
cout<<"Input the values for A"<<endl;
for(i = 0; i<=n-1; i++)
    {
        cin>>x;
        A.push_back(x);
    }

cout<<"Input the values for B"<<endl;
for(i = 0; i<=n-1; i++)
    {
        cin>>x;
        B.push_back(x);
    }

// Does the set union on set A and set B
set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(AUB, AUB.begin()));

//Does the set difference between set A and B
set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(A_B, A_B.begin()));

// Does the set difference between set B and A
set_difference(B.begin(), B.end(), A.begin(), A.end(), inserter(B_A, B_A.begin()));

cout<<"The values of AUB"<<endl;
for(i = 0; i<AUB.size(); i++ )
    {
        cout<<AUB[i];
    }

cout<<"The values of A_B"<<endl;
for(i = 0; i<A_B.size(); i++ )
    {
        cout<<A_B[i];
    }

cout<<"The values of AUB"<<endl;
for(i = 0; i<B_A.size(); i++ )
    {
        cout<<B_A[i];
    }
}