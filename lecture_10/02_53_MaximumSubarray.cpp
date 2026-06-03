#include<iostream>
#include<climits>
using namespace std;

int main(){
// Problem no.53 -> Leetcode    
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