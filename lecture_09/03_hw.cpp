#include <iostream>
#include <vector>
using namespace std;

// can start solving easy problems on Array and vectors from leetcode

// linear search ka code likho on a vector
int linearSearch(vector<int>vec,int target){
    for(int val:vec){
        if(val == target){
            return val;
        }
    }
    return -1;
}

// reverse a vector ka code likhna hai on a vector (function me likhna hai)
void reverseVector(vector<int> &vec){
    int size = vec.size();
    int start = 0 ,end = (size-1);
    while(start <= end){           
        swap(vec[start],vec[end]); 
        start++;
        end--;
    }
}

int main(){
    int target = 8;
    vector<int>vec ={1,2,3,7,8};
    cout << linearSearch(vec,target) << endl;

    reverseVector(vec);
    for(int val : vec){
        cout << val << " ";
    }
    
    return 0;
}

// Learnings:
//maine phle jo function bnaya tha usme pass by value ho rha tha isliye original vector me koi change nahi aa rha tha
//isiliye same vector print ho jaa rha tha kyuki
//fix : pass by value -> pass by reference(& lagao before function name)
