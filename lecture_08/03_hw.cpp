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


void uniqueElements(int arr[],int size){
    
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }    
    }
}


void intersectionArr(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
    
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

    int array[] = {4, 2, 4, 5, 2, 1};
    int size = 6;
    uniqueElements(array,size);

    int array1[] = {1,2,3,4,5,6,7,8};
    int size1 = 8;
    int array2[] = {3,4,5,6,7,8};
    int size2 = 6;
    intersectionArr(array1,array2,size1,size2);

    
    return 0;
}