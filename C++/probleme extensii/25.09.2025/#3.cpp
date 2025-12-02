#include<bits/stdc++.h>
          using namespace std;
          string S;   int k1,k2,k3,k4,k5,suma;
int main()
    {  int i;   cout<<"Citeste sirul de caractere s:"<<endl;
       getline(cin,S);
       cout<<"Avem sirul de caractere: "<<endl;    cout<<S<<'\n';
       for(i=0; i<=S.size()-1; i++) 
	  	 switch (S[i])
	   { case 'A'...'Z' : {  k1++; break;  } 
           	      case 'a'...'z'   : {  k2++; break;  }  
	       case '0'...'9' : {  k3++;   suma+=int(S[i]-48);  break; }
	       case '   '       : {k4++; break; }    
	       default        : {k5++; break; }
	   }
                    if (k1) cout<<"Nr de litere mari in s este k1="<<k1<<'\n';
	         else cout<<"nu sunt litere mari"<<endl;
                    if (k2) cout<<"Nr de litere mmici in s este k2="<<k2<<'\n';
	         else cout<<"nu sunt litere mici"<<endl;
      if (k3) {  cout<<"Nr de cifre in s este k3="<<k3<<'\n';
	       cout<<"suma cifrelor in s este suma="<<suma<<endl;
                 }
	         else cout<<"nu sunt cifre in S"<<endl;
      if (k4) cout<<"Nr de lacune in s este k4="<<k4<<'\n';
	         else cout<<"nu sunt lacune in S"<<endl;
      if (k5) cout<<"Nr de semne, care nu sunt lacune in s este k5="<<k5<<'\n';
	         else cout<<"nu sunt semne in S"<<endl;
      while(S.find(' ',0)<=S.size()-1) S.erase(S.find(' ',0),1);                               //   va sterge lacunile din S
      cout<<"Sirul fara lacune este: "<<endl;
      cout<<S<<'\n';
       
       i=0;
       if(!k1) cout<<"Nu exista litere mari in s"<<'\n';
             else {  while ((int(S[i])<65) || (int(S[i])>90)) i++;                      // gaseste locul primei litere mari in S, daca sunt
	          cout<<" Primul loc a unei litere mare este: "<<i<<'\n';
	      }
		       
        if (S.find('@',0)> S.length()) cout<<"Nu exista @ in sir"<<'\n';
	     else cout<<"Locul simbolului @ este: "<<S.find('@',0)<<'\n';	 
		       
      return 0; 
}
