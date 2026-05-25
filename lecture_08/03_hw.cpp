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
    cout << "sum of elements = " << sum << endl;
    cout << "product of elements = " << product << endl;
}

void swapMinMax(int arr[],int size){
    int minIndex = 0;
    int maxIndex = 0;

    //finding min and max index
    for(int i=0;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
        if(arr[i]>arr[minIndex]){
            maxIndex = i;
        }
    }
    //swapping
    // swap(arr[minIndex],arr[maxIndex]);
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}




int main(){
    int array[] = {1,2,3,4,5};
    int size = 5;

    operationArray(array,size);

    swapMinMax(array,size);
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}