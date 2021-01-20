#include <bits/stdc++.h>
using namespace std;

//Assuming that the characters are stored using 8 bit and there can be 256 possible characters.

bool check(string s, string s2) 
{ 
    int count[256] = {0}; 
    int i; 
    for (i = 0; s[i] && s2[i];  i++) 
    { 
        count[s[i]]++; 
        count[s2[i]]--; 
    } 
    if (s[i] || s2[i]) 
        return false; 
    for (i = 0; i < 256; i++) 
        if (count[i]) 
            return false; 
     return true; 
} 
int main() {
	string s;
	cin>>s;
	string s2;
	cin>>s2;
	if (check(s,s2) ) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
	return 0;
}


TIME COMPLEXITY: O(n)
