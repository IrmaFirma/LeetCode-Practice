#include <iostream>
using namespace std;

//binary search

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int target = 11;
    
    int l = 0;
    int r = n-1;
    
    while(l<=r){
        int m = l + ((r-l)/2);
        if(arr[m] == target){
            cout<<target;
            break;
        }else if(arr[m] < target){
            l = m+1;
        }else{
            r = m-1;
        }
    }
    
    return 0;
}
