// C++ program to count all distinct substrings in a string
#include<bits/stdc++.h>
using namespace std;

int distinctSubstring(string str)
{
    set<string> result;
    
    for(int i = 0; i<=str.length(); i++){
        for(int j = 1; j<=str.length() - i; j++){
            result.insert(str.substr(i, j));
        }
    }
    
    return result.size();
}

// Driver Code
int main()
{
    string str = "aaaa";
    cout << (distinctSubstring(str));
}
