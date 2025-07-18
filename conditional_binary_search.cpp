#include <bits/stdc++.h>
using namespace std;

//Binary Search Conditional method
int binarySearch(int arr[], int l, int r, int target)
{
    while (l < r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == true){
            r = mid;
        }else{
            l = mid + 1;
        }
        
    }
    return l;
}

int main(void)
{
    int arr[] = { false, false, false, false, true, true, true };
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, target);
    if(result == -1) cout << "True is not present in array";
    else cout << "First True is present at index " << result;
    return 0;
}
