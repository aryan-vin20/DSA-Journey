#include <iostream>
using namespace std;

void Num_of_digits(int n){
    int num = 0;
    if(n==0){
        num = 1;
    }
    
    while(n>0){    
        n /= 10;
        num ++;
    }
    cout<< num;
}
// if void -> int then cout<< num -> return num also while func call func() -> cout << func() to print  answer!


int main(){
    Num_of_digits(985674);

    return 0;
}