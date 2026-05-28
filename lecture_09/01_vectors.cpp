#include <iostream>
#include <vector> //header file for using vector in code;indivisual header file ko hi include karo...
using namespace std;

int main(){
    vector<char>vec = {'a','b','c','d','e'};
    cout << vec[0] << endl;

    //for each loop:
    for(char val : vec){      //val -> it stores the value at index val and not the index val 
        cout << val << endl;
    }

    vector<int>nums;

    cout << nums.size() << endl; //0
    nums.push_back(12);
    nums.push_back(14);
    nums.push_back(16);
    nums.pop_back();
    cout << nums.size() << endl; //2
    cout << nums.front() << endl; //12
    cout << nums.back() << endl;  //14
    cout << nums.at(0) << endl; //12


    // vector size / capacity!
    vector<int>price;
    price.push_back(12);
    price.push_back(14);
    price.push_back(16);

    cout << price.size() << endl;
    cout << price.capacity() << endl;




    return 0;
}

// vectors(STL - container) -> array like -> memory ke andr vector array hi hota hai
// dynamic in nature -> unlike array inka size fixed nahi hota i.e after implementation of vector we can change the size of vector
// Vector syntax : vector<data type which is to be stored>vector name
// 1.vector<int>vec; vector of size zero
// 2.vector<int>vec = {1,2,3}; vector intialized with some value
// 3.vector<int>vec(3,0) 3->vector size ; 0-> intialized vector with value 0   // its like vector<int>vec = {0,0,0}

// for each loop:
// for(datatype variable : vectorName){
//     //code
// }


// Vector functions:
// 1.size() -> tells the size of the vector
//  .capacity() -> tells the capacity of the vector
// 2.push_back(x) -> adds the value x at the rightmost box([size-1]th index)
// 3.pop_back() -> removes the value form the rightmost box 
// 4.front() -> prints the value at the leftmost or 0th index
// 5.back() -> prints the value at the rightmost or (size-1)th index
// 6.at() -> prints the value at ith index


// Static vs Dynamic allocation of memory :
// we will see how vectors are implemented in memeory
// static allocation -> compile time pe hota hai
//                      Stored in Stack
//                      eg.array
// Dynamic allocation -> execution/run time pe hota hai
//                      Stored in Heap
//                      eg.vector

// vector size and capacity : each time jab vector me box kam prta hai toh no. of boxes double ho jate hai!


// C++ me jo bhi containers hote hain (jaise vector),
// wo function ke andar by default "pass by value" se jaate hain.
// Iska matlab function ko us container ki ek copy milti hai.

// Agar original container ko bina copy banaye use karna ho,
// ya usme changes karne ho,
// to "pass by reference" use karte hain.

// Pass by reference ke liye datatype ke baad '&' lagate hain.

// int singleNumber(vector<int>& nums)