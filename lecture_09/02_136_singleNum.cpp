#include <iostream>
#include <vector>
using namespace std;

int singleNum(vector<int>& nums){
    int ans = 0;
    for( int val : nums){
        ans = ans^val;
    }
    return ans;
}
int main(){
    vector<int>num = {1,2,2,4,1,4,5};
    cout << singleNum(num) << endl;

    return 0;
}

// if {2,1,-2,4,-4} yaha life easy hota ham simply saare nums ka sum lete toh 4 and -4 and similarly 2 and -2 cancel ho jata!
// you must implement a solution with a linear runtime complexity->nested loop nhi use kr skte
// we have to use some operation that cancels out when number is same -> similar idea is of Bit-wise XOR operator!
// 2-2 = 0 similarly 2^2 = 0
// Properties : n^n = 0 and n^0 = n
// {4,1,2,2,1} = 4^1^2^2^1 is equal to 4.Kar ke check kar lo!