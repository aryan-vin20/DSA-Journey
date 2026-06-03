#include<iostream>
#include<vector>
using namespace std;


vector<int> pair_Sum(vector<int>nums,int target){ //return type of function is vector that contains integer -> vector<int>
    vector<int>ans;
    int size = nums.size();
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}


//optimal solution:
vector<int> pairSum(vector<int>nums,int target){
    vector<int>anss;
    int size = nums.size();

    int i=0,j=(size-1);
    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            anss.push_back(i);
            anss.push_back(j);
            return anss;
        }
    }
}


int main(){
    vector<int>nums = {2,7,11,15};
    int target = 26;

// Brute force approach: T -> O(n^2)
    vector<int>ans = pair_Sum(nums,target);
    cout << ans[0] << " , " << ans[1] << endl;


// coding ke andr question me di gayi har ek baat ka use hota hai !    
// hamne apne solution me iss ka toh fayda hi nahi uthaya ki array SORTED hai...
// optimal approach: T -> O(n)
    vector<int>anss = pairSum(nums,target);
    cout << anss[0] << " , " << anss[1] << endl;   

    return 0;
}