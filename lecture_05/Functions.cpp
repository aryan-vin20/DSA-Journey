#include <iostream>
using namespace std;

int sumOfDigits(int num){
    //for this particular problem while loop se solve krna easy hota hai
    //also try to remeber as this is a standard process 
    int digitSum = 0;
    while(num>0){
        int lastDigit = num%10;
        num = num/10;
        digitSum = digitSum + lastDigit;
    }
    return digitSum ;

    }
    

int main(){
 
    cout << sumOfDigits(69);

    return 0;
}

// HW:
// 1.study about switch 
// 2.WAF to check if a number is prime  or not
// 3.WAF to print all prime number from 2 to N
// 4.WAF to print nth fibonacci number


//Function:
// Input(parameters) -> Function -> Output(we write type of output before func. name)


// returnType funcName(type p1,type p2,....){ 
//         //do some work
// }

// type p1 -> type of parameter(type)    Parameter name(p1)
// just like before declaring/naming a variable we define its type (same for parameter)
// Parameter -> while Defining function  Argument -> While func call
// Argument -> parameters while func call SIMPLE!


// if func return nothing then returnType -> void
// **Print krna != return krna**


// Function in MEMORY:Function memory me kaha store hota hai?
//TWO TYPES OF MEMORY -> STACK and QUEUE
// DATA STRUCTURE : aisi chiz jo data ko store karati hai eg.,stack,queue..
// Generally our function gets stored in stack
// |            |
// |            |
// |    func    |  // once work is done func upar se hat jata hai
// |____main____|
// kisi bhi function me return likhne ke baad kuch bhi likhoge uska koi value nahi hai


//Pass by value:copy of argument is passed to function
// eg. int sum(int a,int b)(
//     a=a+10;
//     b=b+10;
//     return a+b;
// )
//    int main(){
//     int a =5,b=4;
//     cout << sum(a,b) << endl;   //29

//     cout << a << endl;         //this will be still 5
//     cout << b << endl;         //this will be still 4
//     this phenomena is called pass by value...

//    }



