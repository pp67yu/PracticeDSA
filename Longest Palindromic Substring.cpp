#include <iostream>
using namespace std;

int checklongestSubstring(string s){
    int max_l=1;
    int strt=0;
    int l=s.size();
    int low, high; 
    for (int i = 1; i < l; ++i) { 
        low = i - 1; 
        high = i;  //longest even length palindrome with center points as i-1 and i. 
        while (low >= 0 && high < l && s[low] == s[high]) { 
            if (high - low + 1 > max_l) { 
                strt = low; 
                max_l = high - low + 1; 
            } 
            --low; 
            ++high; 
        } 
        low = i - 1; 
        high = i + 1; // longest odd length palindrome with center points as i-1 and i+1.
        while (low >= 0 && high < l && s[low] == s[high]) { 
            if (high - low + 1 > max_l) { 
                strt = low; 
                max_l = high - low + 1; 
            } 
            --low; 
            ++high; 
        } 
    } 
    for (int i = strt; i <= strt + max_l - 1; ++i) {
        cout<<s[i];}
    cout<<"\n";
    cout<< max_l;
}

int main() {
    string s;
    cin>>s;
    checklongestSubstring(s);
    //cout<<max_l<<"\n";
	return 0;
}

TIME COMPLEXITY: O(n^2)


