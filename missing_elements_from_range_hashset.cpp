// A hashing based C++ program to find missing
// elements from an array
#include <bits/stdc++.h>
using namespace std;

// Print all elements of range [low, high] that
// are not present in arr[0..n-1]
void printMissing(int arr[], int n, int low,
                  int high)
{
    unordered_set<int> hashset;
    // Insert all elements of arr[] in set
    for(int i = 0; i<n; i++){
        hashset.insert(arr[i]);
    }
    // Traverse through the range an print all
    // missing elements
    for(int i = low; i<=high; i++){
        if(hashset.find(i) == hashset.end()){
            cout<<"Missing el: "<<i<<endl;
        }
    }

}

// Driver program
int main()
{
    int arr[] = { 1, 3, 5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 1, high = 10;
    printMissing(arr, n, low, high);
    return 0;
}
