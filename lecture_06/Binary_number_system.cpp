#include <iostream>
using namespace std;

//Decimal -> Binary
int Dec_Bin(int n){
    int ans = 0;    // observe where we are proceeding like this!
    int pow = 1;    // 10^0

    while(n>0){     //( 1/2 = 0)
        int rem = n % 2;
        n = n / 2;

        ans = ans + (rem)*pow;
        pow = pow * 10;
    }
    return ans;    
}

//Binary -> Decimal
int Bin_Dec(int n){
    int ans = 0;
    int pow = 1;  //2^0


    while(n>0){
        int rem = n%10;
        n = n / 10;
         
        ans = ans + (rem)*pow;
        pow = pow *2;
    }
    return ans;
}


int main(){

    cout << Dec_Bin(42) << endl;
    cout << Bin_Dec(101010) << endl;

    return 0;
}
//leftmost bit -> Most Significant Bit(MSB)

//for integer memory me 4bytes yani 32bits reserved rhta hai
//00000..26 times zero101010 this is how 42 is stored in memory!

//2's complement:
//how to write -10 in binary??
// step1 : write 10 in binary = 1010
// step2 : add one zero to the leftmost bit = 01010
// step3 : 1->0 , 0->1 : 1's complement =10101
// step4 : add 1 to the number obtained in step 3 = 10110 //2's complement
// number obtained is -10 in binary
// note : if leftmost bit is 1 -> negative number
//                           0 -> positive number