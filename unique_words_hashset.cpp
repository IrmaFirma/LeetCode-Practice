#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>
using namespace std;

// Function to print unique words
void printWords(const vector<string>& words) {
    unordered_set<string> hashset;
    
    for(int i = 1; i<=words.size(); i++){
        if(hashset.find(words[i]) == hashset.end()){
            cout<<words[i]<<endl;
            hashset.insert(words[i]);
        }
    }

}

int main() {
    // Input string
    string str = "geeks for geeks";

    // Storing string in the form of a vector of words
    vector<string> wordVector;
    istringstream iss(str);
    string word;
    while (iss >> word) {
        wordVector.push_back(word);
    }

    // Passing vector to print words function
    printWords(wordVector);

    return 0;
}
