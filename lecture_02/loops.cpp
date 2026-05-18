#include <iostream>
using namespace std;

int main(){

//Print numbers from 1 to 5    
    int count = 1; //initialisation 

    while(count<=5){
        cout << count <<" ";
        count++; //updation
    }



//sum of numbers from 1 to n
    int x;
    cout <<"Enter the value of x : ";
    cin >> x ;
    int sum = 0;

    for(int i = 1 ; i<=x ; i++ ){
        (sum = sum + i);
        if(i==(x-1)){    //break statement se ham loop se exit kar jate hai
            break;       //iss example me (x-1) tak hi sum hoga kyuki yaha x-1 pe loop break ho jaa rha hai...
        }
    }
    cout<< "Sum = " << sum << endl;



//sum of odd numbers from 1 to n
    int y ;
    cout <<"Enter the value of y : " ;
    cin >> y ;
    int oddSum = 0;

    for(int j = 1 ; j<=y ;j++){
        if(j%2!=0){
            oddSum += j;
        }
    }
    cout<< "oddSum is "<< oddSum << endl;



//check if number is prime or not    
    



    return 0;
}


    //initialisation
    // while(conditon){
    //     jab tak condition->True
    //     work to be done   
    //     updatiom taki infinte loop na bane
    // }


// ctrl c press krne se infinite loop ruk jyega
//break : loop se nikal jayega


    // for(initialisation;condition;updation){
    //     work to be done
    // }


    // initialisation
    // do{
    //             work to be done
    //             updation
    // }while(condition)  
    // phle kaam hoga phir condition check hoga!  
    // agar condition false hoga phir bhi ek baar kaam to hoga hi hoga

 


