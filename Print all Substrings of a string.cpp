#include <iostream>
using namespace std;

void substr(string s,int n){
    for(int l=0;l<n;l++)
        for(int i=1;i<=n-l;i++)
                cout<<s.substr(l,i)<<"\n";
}

int main() {
    string s;
    cin>>s;
    int n=s.size();
    substr(s,n);
	return 0;
}



TIME COMPLEXITY:O(n^2)

