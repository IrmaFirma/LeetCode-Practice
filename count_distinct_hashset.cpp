/* CPP program to print all distinct elements
   of a given array */
#include <bits/stdc++.h>
using namespace std;

// This function prints all distinct elements
int countDistinct(int arr[], int n)
{
    unordered_set<int> hashset;
    
    int counter = 0;
    
    for(int i = 0; i<n; i++){
        if(hashset.find(arr[i]) == hashset.end()){
            hashset.insert(arr[i]);
            counter++;
        }
    }
    
    return counter;

}

// Driver Code
int main()
{
    int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);
    return 0;
}
