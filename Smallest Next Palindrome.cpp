#include <iostream>
using namespace std;
int main(void) {
	int t,i,n;
	string s,str;
	cin>>t;
	while(t--){
	    cin>>s;
	    str=s;
	    n=s.size();
	    for(i=n/2;i<n;i++)
      s[i]=s[n-i-1];
	    if(s>str)
      cout<<s<<"\n";
	    else{
      for(i=(n-1)/2;i>=0;i--){
	            if(s[i]!='9'){
	                s[i]++;
                  break;
              }
              else 
                 s[i]='0';
           }
	        for(i=n/2;i<n;i++)
          s[i]=s[n-i-1];
	        if(s[0]=='0'){
	            s+='1';
	            s[0]='1';
	         }
           cout<<s<<"\n";
        }
       }
       return 0;
     }

