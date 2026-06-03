#include<iostream>
#include<vector>
#include<algorithm> //to use sort algorithm

using namespace std;

//Brute force approach:
int majority_element(vector<int>nums){
    int n=nums.size();
    for(int val:nums){
        int freq=0;
        for(int el:nums){
            if(el==val){
                freq++;
            }
        }
        if(freq>(n/2)){
            return val;
        }
    }
    return -1;
}

//better approach:
int MajorityElement(vector<int>nums){
    int n=nums.size();
    //sort:
    sort(nums.begin(),nums.end());

    //freq count:
    int freq=1;
    int ans = nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){ // mai baar baar == ki jagah = likh deta hu!
            freq++;
        }else{
            ans = nums[i];
            freq = 1;
        }
        if(freq >(n/2) ){
            return ans;
        }     
    }
    return ans;
}

//Most optimised : Moore's voting algorithm  T->O(n)
int majorityElement(vector<int>nums){
    int n=nums.size();
    int freq=0 ,ans=0;

    for(int i=0;i<n;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;

}



// Problem no.169 -> Leetcode
int main(){
    vector<int>nums = {1,2,2,2,2,2,1,1,1};
    cout << "Majority element is : " << majorityElement(nums) << endl;
    
    return 0;
}