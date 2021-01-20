#include <bits/stdc++.h>
using namespace std;

void check(string st,int idx1,int idx2){
    if (idx1==idx2)
         cout<<st<<"\n";
    else{
        for(int i=idx1;i<=idx2;i++){
            swap(st[idx1],st[i]); //swap the characters
            check(st,idx1+1,idx2);  //call the function again
            swap(st[idx1],st[i]);   //backtrack the remaining
        }
    }
}

int main() {
	string s;
	cin>>s;
	int len=s.size();
	check(s,0,len-1);
	return 0;
}
  
  
TIME COMPLEXITY: O(n*n!)
There are n! permutations and it requires O(n) time to print a a permutation.





