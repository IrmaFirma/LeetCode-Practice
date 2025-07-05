#include <iostream>
using namespace std;

int main()
{
    int array[6];
    int size = sizeof(array) / sizeof(array[0]); 
    for(int i = 3; i>0; i--){
        array[i+1] = array[i]; //creating space for new element
    }
    
    array[0] = 20; //add new alement at the start

    
    for(int i = 0; i<size; i++){
        cout<<"Element at index "<<i<<" is "<<array[i]<<endl;
    }
    
    return 0;
}
