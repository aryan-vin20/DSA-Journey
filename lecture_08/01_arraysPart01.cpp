#include <iostream>
#include <climits>  // i am writing  infinity in code
using namespace std;

void changeArr(int arr[],int size){
    cout << "in function\n";
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

int main(){
    int marks[5] = {99,100,92,86,75};
    marks[3] = 69;   //marks[i] we can consider this as a variable now
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    
    //what if there were 1000 students?
    // now we will use loop to print marks
    int size_of_array = sizeof(marks)/sizeof(int) ; //to get size of array
    for(int i =0 ; i<size_of_array ; i++){
        cout << marks[i] << endl;
    }


    int SIZE = 6;
    int price[SIZE];
    
    for(int i =0 ; i<SIZE ; i++){
        cin >> price[i];
    }

    for(int i =0 ; i<SIZE ; i++){
        cout << price[i] << endl;
    }


//Find smallest/largest in ARRAY
   int nums[] = {5,15,22,1,-15,24}; //blank -> here size will be automatically 6
   int size = 6;

   int smallest = INT_MAX; //plus infinity
   int largest = INT_MIN;  // minus infinity

    for(int i = 0 ; i<size ; i++){
        // if(nums[i] < smallest){
        //     smallest= nums[i];
        // }
        // more efficient way of writing above 3 lines will be using min function
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    cout << "smallest is = " << smallest << endl;
    cout << "largest is = " << largest << endl;

    int arr[] = {1,2,3};

    changeArr(arr,3);  // arr->pass by reference->original copy me hi change ho gya hai

    cout << "in main \n";
    for(int i=0 ; i<3 ;i++){
        cout << arr[i] << " ";

    }
    cout <<endl;


    return 0;
}

// every technology is a solution of a problem that someone faced at some point of time
// data is the fuel for development,coding,programming...
// Data structures -> stores data eg.array,
// algorithms -> Data ke upar efficient operations perform krne ke tarike eg.search,sort etc

//ARRAY basics

// Properties:
// we can store same type of data in array
// array are contagious + linear in memory -> jab arrays memeory ke andr store hota hai toh wo data ek saath store hota hai

// Syntax:
// a)int marks[5];  uninitialized array
// 5 box is created where each box can store only int value
// address of boxes -> 100,104,108,112,116    (int -> takes 4bytes of memory)
// int -> sabse phle hame btana hota hai ki array ka jo har ek block hai wo kis data type ko store krega
// marks -> array name
// [5] -> Array ka size kitna rkhna hai

// b)initialized - array intialize krna matlab array banate time hi uske elements ko initial values dena 
// int marks[5] = {99,100,92,86,75};
// double price[] = {30.42,44.67,98.61}; automatically array ka size 3 ho gya!
// 0th index -> 30.42  1st index -> 44.67  2nd index -> 98.61  (index->position)
// index = 0 to [(size of array)-1]

// access value at ith index -> array[i]


// 2 new functions to I learned from lecture : min,max
// min(2,3) = 2       max(2,3) = 3


// pass by reference:opposite of pass by value (reference = address)
// used for non-primitive data types eg. array
// jab bhi ham pass by reference krte hai toh ek tarike se ham data type ka pura address pass kr dete hai
// jab bhi kisi chiz ka address ho toh mtlb aap usme jake original copy me changes kr skte hai(unlike pass by value yaha koi copy create nahi hota)



