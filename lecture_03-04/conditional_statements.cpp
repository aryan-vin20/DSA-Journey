#include <iostream>
using namespace std;

int main (){
    char ch;
    cout<< "Enter character\n";
    cin>> ch;
    if(ch>='A' && ch<='Z'){ //mistake : Mai single quotes lagan bhul gya tha
    //if(ch>=65 && ch<=90)  at the end memory me char apne ASCII values ke form me store hota hai
        cout<<"Upper case\n";
    }else{
        cout<<"Lower case\n";
    }

    int n = 45;
    cout << (n >= 0 ? "Positive" : "Negative");
    return 0;
}


//if 
//if_else 
//if_else if_else if ... 
//if_else if_else if_...._else

//Ternary Statements   used when simple 1-2 condtions to check
                   //Syntax - conditon?stt1:stt2;




