#include <iostream>
using namespace std;

// sum and product of all elements in an array
int operationArray(int arr[],int size){
    int sum = 0;
    int product = 1;
    for(int i=0;i<size;i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << sum << endl;
    cout << product << endl;
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = 5;

    operationArray(array,size);
    
    return 0;
}