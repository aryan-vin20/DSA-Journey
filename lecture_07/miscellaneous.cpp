#include <iostream>
#include <cmath>
using namespace std;

int Reverse_num(int n){
    int ans = 0;

    while(n>0){
        int rem = n % 10;

        ans = ans*10 + rem ;
        n/= 10;         
    }
    return ans;
}




int main(){
    // cout << (8^2) << endl;   
    // cout << sizeof(int) << endl;
    // cout << sizeof(long int) << endl;
    // cout << sizeof(short int) << endl;
    // cout << sizeof(long long int) << endl;

    // cout << Reverse_num(122);

    return 0;
}

//Bitwise operators:

//Bitwise AND ->   &     a & b     similar to AND operator
//Bitwise OR  ->   |     a | b     similar to OR operator
//Bitwise XOR ->   ^     a ^ b     similar to XOR operator
// same -> 0 ; Diff->1

//Bitwise Left-Shift operator ->   <<     a<<i  "a me har bit ko leftside i times shift kr do aur jo right me khali space bache usme zero likh do"
// eg. 4<<1=8  0100 each bit ko left side 1 se shift kro->1000 = 8
// note: ans = a*(2 ki power i)

//Bitwise Right-Shift operator ->   >>    a>>i   "a me har bit ko rightside i times shift kr do"
// eg. 4>>2   100 ko 2 times aage shift krdo -> 001 = 1
// (right side mme koi khali space nahi hota hai isliye jo values yaha shift ho rhi wo remove ho jaa rhi)
// yaad karo integer kaise store hota tha
// note: ans = a/(2 ki power i)

// eg. 8^2 = 10
// 8 = 1000  2 = 0010 
// 1000^0010 = 1010






//*Scope* : it tells ki jo variable apne declare kiya hai usko kaha kaha use kr skte hai  ->2types
// LOCAL: if-else,loops,function,Block of code{}
// i.e ki agar apne koi variable define kiya hai { int x = 10 } and ab aap iske bahar iss variable ko use krna chahte hai toh ye possible nahi hai
// eg. tumne dhyan diya hoga jab hame 2 inner lopps chalane the toh dono for loop ke andr hamne int j ek hi variable liya tha(nested loops)
// kyuki jab ek for loop end ho jayega uske bahar uss j ka history delete ho jata hai toh aap dubara use dusre loop me as variable use kr skte ho

// GLOBAL : iss variable ko pure code me kahi use kr skte ho 

// int x = 20

// void fun(){
//     //yaha bhi use kr skte hi
// }

// int main (){
//     // isme bhi kahi bhi use kr skte ho
// }





// Data_type_modifiers: Change meaning of data types

// phle ye smjho
//MSB of -ve num -> 1 
//MSB of +ve num -> 0
// int -> 4bytes -> 32bits -> 32 spaces (msb(lefte most bit) se sirf sign pata chlta hai isliye 2^31)
// int x : Range -2^31 to (2^31 - 1)   //-1 isliye kyuki 0 se start hota hai

// ab maan lo hame ek number hai 2^32 use store krna hai PHIR?

// 1.long : long int x -> 8bytes reserved
// 2.short : short int x -> 2bytes reserved
// 3.long long : ye usually int ke saath use hota hai 
//   ye bhi int ke reserved bytes ko badha deta hai
// 4.signed : by default signed hi hota hai
//   eg. signed int is same as int ( Range -2^31 to (2^31 - 1) ) //kyuki msb se sign pata chlta hai
// 5.usigned : we use this jab we are sure ki isme sirf +ve chize hi store hongi
//   eg.like koi int x hai isme sirf logo ka bank account number hi store hoga
//   Fayda kya hota hai ?
//   now the msb is not used for sign toh ab use ham magnitude ke liye use kr skte hai
//   RANGE : 0 to (2^32 - 1)  //range almost double ho gya!


//HW:
// 1.Figure out how to find if a number is power of 2 without any loop 
// Hint : Bits  :  <<,>> this can be used








