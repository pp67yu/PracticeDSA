#include<bits/stdc++.h>
using namespace std;

int main(){
string s1;
cin>>s1;
string s2;
cin>>s2;
int x = 0;
int y = 0;  
        for(int i = 0; i < s1.size(); i++){
            
            if(s1[i] != s2[i]){
                if(s1[i] == 'x') 
                x++;
                else 
                y++;
            }
        }
        
        if(x%2 == 1 ^ y%2 == 1) 
           return -1;                                         // If one is odd other is even we can't make the strings equal.
        
        if(x%2 == 0 && y%2 == 0) 
           return x/2 + y/2;                                 // If both even only case 1 applicable.
        
        return (x-1)/2 + (y-1)/2 + 2;                    // If both odd we make them take the extra mismatch from both the types of mismatch and add cost of 2 for that, rest same as previous condition.
    }
};


TIME COMPLEXITY: O(n)

