
#include <bits/stdc++.h>
        using namespace std;
        int A[10][15],n,m,i,j;
 int main()
       {   cout<<"n=";  cin>>n;     // n- indica numarul de linii
           cout<<"m="; cin>>m;      // m- indica numarul de coloane
           for (i=1; i<=n; i++)
                          for (j=1; j<=m; j++)
                                  {  cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j];
                                  }
           cout<<"avem tabloul 2-dim"<<endl;
            for (i=1; i<=n; i++)
                        {   for (j=1; j<=m; j++)
                                               cout<<setw(5)<<A[i][j];
                            cout<<endl;
                        }
               int S=0, maxx=A[1][1],  minn=A[1][1], k=0;
               for (i=1; i<=n; i++)
                              {for (j=1; j<=m; j++)
                                       {    S+=A[i][j]; //s=s+ A[i][j];
                                             maxx=max(maxx, A[i][j]);
                                             minn=min(minn, A[i][j]);
                                             if ( A[i][j] % 5 ==0) k++;
                                        }
              cout<<"Suma="<<S<<endl;
              cout<<"numarul maxim="<<maxx<<endl;
             cout<<"numarul minim="<<minn<<endl;
             if (k) cout<<"numarul de nr divizibile cu 5 este k="<<k<<endl;
             else cout<<"nu sunt numere divizibile cu 5"<<endl;
           return 0;
                             }
    }