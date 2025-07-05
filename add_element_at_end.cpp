#include <iostream>
using namespace std;

int main()
{
    int array[6];
    int size = sizeof(array) / sizeof(array[0]); 
    int length = 0;
    for(int i = 0; i<3; i++){
        array[length] = i;
        length++;
    }
    
    array[length] = 10;
    length++;

    
    for(int i = 0; i<size; i++){
        cout<<"Element at index "<<i<<" is "<<array[i]<<endl;
    }
    
    return 0;
}
