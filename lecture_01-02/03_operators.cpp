#include <iostream>
using namespace std;


int main(){
    int a=12, b=5;
    int sum = (a+b);

    cout << "sum is = " << sum << endl;
    cout << "diff is = " << (a-b) << "\n";
    cout << "Remainder is = " << (a%b) << "\n"; 
    cout << "div is = " << (a/b) << "\n";//2 not 2.4 kyuki yaha hamne int ko int se divide kiya hai

    int c = 12;
    double d = 5 ;
    cout << "div is = " << (c/d)<< endl; //2.4 kyuki answer is in the form of double(bigger data type)


    //now see benefit of typecasting
    cout << "div is = "<< (3/(float)2) << endl; 
    //yaha aap bol skte ho ki bro both are equal data type toh answer int me kyu nahi aaya?--Float is more precise!

    int ans =  (3/(float)2);
    cout << ans << endl; //yaha 1 print hoga kyuki ans ek variable hai jiska type int hai...
    
    cout << (3<5) << endl; // true-> 1
    cout << !(3<5) << endl; //false-> 0


    int e = 10;
    int f = e++; //kaam ye hai ki hame e ki value ko f me store karan hai phle wo hoga ; e ki value update uske baad hogi
    cout << f << endl; //10
    cout << e << endl; //11

    int g = 15;
    int h = ++g ; // phle g ki value update hogi phir usko h me store karenge
    cout << h << endl; //16
    cout << g << endl; //16


    return 0;
}

// jab bhi operator use hota hai toh result ka datatype is same as larger of the data type among operands 
//arithematic operators : +,-,*,/,% these all are binary operators as they need 2 operands
//'=' this is assignment operator
//relational operators : >,>=,<,<=,==,!=
// relartional operator ka answer hamesha 0(false) ya 1(true) hoga
//logical operator : OR(||)  AND(&&)  NOT(!)
//unary operators : increment ++ , decrement --
//a++(post increment) means phle kaam hoga phir a ki value update hogi
//++a(pre increment) means phle a ki value update hogi phir kaam hoga

// Operator precedance:
// !,+,-(unary operators)
// *,/,%  {R to L} if these 3 come in same operation then priority will be from right to left
// +,- 
// <,<=,>=,>
// ==,!=
// &&
// ||
// =(assignment operator) {R to L}
// better practice is to use ()
