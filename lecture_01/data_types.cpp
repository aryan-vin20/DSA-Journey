#include <iostream>
using namespace std;

int main(){
    int age = 20;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true;
    double num = 1.67;

    cout << age << "\n";
    cout << grade << '\n';
    cout << PI << endl;
    cout << isSafe << "\n";
    cout << num << "\n";

    return 0;

}

// Primitive Data types 
//koi bhi variable define krne se phle likho ki uska type kya hai
// int - 4 bytes
// char - 1 bytes
// float - 4 bytes, end me f likhna jaruri hai  
// bool - 1 bytes  true->1  false->0
// double - 4*2 = 8 bytes i.e double of float
//dhyan se dekho ham next line pe aane ke liye teen chize use kiye hai
// "\n"(fastest),'\n',endl 