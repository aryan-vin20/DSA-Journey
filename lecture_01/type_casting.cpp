#include <iostream>
using namespace std;

int main(){

    //Conversion:
    char Grade = 'A' ; //ASCII value 65  char-1bytes
    int value = Grade;  //int-4bytes
    cout << value << "\n";

    //Casting:
    double price = 100.99; //double-8bytes
    int newPrice = (int)price; //int-4bytes
    cout << newPrice << "\n";

    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age is :" << age << "\n";

    return 0;
}

//100.01 ho ya 100.99 dono ko hi jab int me typecast krnege ton 100 hi store hoga


// converting data from one type to another -- Type casting
    // 1.conversion (implicit - compiler automatically kar ke deta hai)
    // from small data typr-> large data type


    // 2.casting(explicit - programmer ko manually krna prta hai)
    // from big data type -> small data typr

