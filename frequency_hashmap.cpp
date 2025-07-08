// C++ program for the above approach
#include <bits/stdc++.h>
#include <utility>
using namespace std;

void printFrequency(string str)
{
    unordered_map<char, int> hashmap; 
    
    for(int i = 0; i<str.length(); i++){ //go through string
        if(hashmap.find(str[i]) == hashmap.end()){ //if you cannot find any matches
            hashmap.insert(make_pair(str[i], 1)); //set it at 1
        }else{
            hashmap[str[i]]++; //if already found increment count
        }
    }
    
    for (auto& it : hashmap) { //print
        cout << it.first << ' ' << it.second << '\n';
    }
}

// Driver Code
int main()
{
    string str = "geeksforgeeks";

    // Function call
    printFrequency(str);
    return 0;
}
