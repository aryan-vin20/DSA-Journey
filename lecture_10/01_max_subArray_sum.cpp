#include<iostream>
#include <climits>
using namespace std;

int main(){
    int array[5] ={1,2,3,4,5};
    int size = 5;
    for(int st=0; st<size ; st++){
        for(int end = st ; end<size ; end ++){
            for(int i=st; i<=end ;i++){
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }  

//Brute-force approach: Time Complexity : O(n^2)
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = 7;
    int maxSum = INT_MIN;
    for(int st = 0; st<size ; st++){
        int currSum = 0;
        for(int end = st ; end<size ;end++){
            currSum += arr[end];
            maxSum = max(maxSum,currSum);
        }
    }
    cout << maxSum << endl;


//Problem no.53 -> Leetcode    
//Kadane's algorithm: most optimised solution->Time complexity->O(n)
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = 7;
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i<size ;i++){
       currSum += arr[i];
       maxSum = max(maxSum,currSum);
       if(currSum<0){
        currSum = 0;
       }
    }
    cout << maxSum << endl;

    return 0;
}


// subarray -> continous part of array
// {1,2,3} = 1,2,3,{1,2},{2,3},{1,2,3} (but not {1,3} -> notContinous)
// total number of subarray = (n*(n+1))/2