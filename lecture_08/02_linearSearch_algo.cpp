#include <iostream>
using namespace std;

int linearSearch(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    } 
    return -1;
}

//Reverse an array :*2pointer approach*
void reverseArr(int arr[],int size){
    int start = 0 ,end = (size-1);
    while(start < end){            // if arr size is even tab ham <= use krte
        swap(arr[start],arr[end]); // swap:it swaps the value at two given position
        start++;
        end--;
    }
}

int main(){
    int array[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = 7;
    cout << linearSearch(array,target,size) << endl;
    
    reverseArr(array,size);

    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }
    cout << endl;

    cout << linearSearch(array,target,size) << endl;


    return 0;
}