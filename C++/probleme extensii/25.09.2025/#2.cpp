#include<bits/stdc++.h>
          using namespace std;
          string s; char A[50],B[50],C[50];
int main() 
   { getline(cin,s);
     cout<<s<<endl;
     cout<<"s.size()="<<s.size()<<endl;
     int k=s.find('a',0);
     if (k<=s.size()-1) { cout<<"este caracterul a in s"<<endl;
                          while (s.find('a',0)<=s.size()-1) {k=s.find('a',0);s[k]=s[k]-32;}
                          cout<<s<<endl;
	                    }
	        else { bool u=0; 
			       int i=0;
				   while (i<s.length())
                        if (s[i]>='0' && s[i]<='9') {u=1;s.erase(i,1);}
                              else i++;
                   if (u) 
                     if (s=="") cout<<"sirul avea numai cifre si a devenit vid"<<endl;
                            else { cout<<s;  cout<<endl; 
                                      strcpy(A,"Liceu");
                                      strcpy(B,A);
	                          cout<<A<<endl;
			  for (i=0; i<=strlen(A)-2;i++)
				    for (int j=i+1; j<=strlen(A)-1; j++)
					            if (A[j]>A[i]) swap(A[j],A[i]);
			cout<<"sirul A cu caracterele descrescator este:"<<endl;
			cout<<A<<endl;
			cout<<B<<endl;
                                   cin>>C;   cout<<strlen(C)<<endl;
		           cout<<C;
		       }
                       else cout<<"sirul s nu avea cifre"<<endl;
               }
 	   return 0;
	 }  