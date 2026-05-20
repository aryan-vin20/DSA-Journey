#include <iostream>
using namespace std;

int main (){

//Square pattern: ABC ABC ABC
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char ch ='A';  //isko yaha iss liye likha hai kyuki har line ke start  hame A krna hai 
        for(int j=0;j<n;j++){                   
            cout << ch << " ";                  
            ch = ch + 1;                        
        }
        cout << endl;
    }

 
//square pattern_02: 123  456  789
    int n;
    cin >> n ;
    int num =1; //hame dubara 1 se start nahi krna har line ke start mein!
    for(int i=0;i<n;i++){                              
        for(int j=0;j<n;j++){                          
            cout << num << " ";                        
            num += 1;
        }
        cout << endl;
    }


//triangle pattern : A BB CCC DDDD
    int n;
    cin >> n;   
    char ch = 'A';
    for(int i = 0;i<n;i++){                    
        for(int j = 0 ;j<i+1;j++){   
            cout << ch;
        }
        ch++;        
        cout << endl ;
    }  
    

//triangle pattern_02:1  21   321   4321  54321
    int n;
    cin >> n;   
    for(int i = 0;i<n;i++){
        for(int j = i+1;j>0;j--){     
            cout << j;
        }
        cout << endl;
    }


//Floyd's Triangle pattern: 1 23 456
    int n;                               
    cin >> n ;
    int num = 1;                         //dhyan do ki isko ham kab use krte hai
    for(int i=0;i<n;i++){                //n lines hongi
        for(int j = 0 ; j<(i+1) ; j++){  //nth line me n times andr wala loop chalega
            cout << num << " ";
            num++;
        }
        cout << endl;
    }   

    
//*Floyd's Triangle pattern*: A CB FED JIHG 
    int n; 
    cin >> n;
    char ch = 'A';
    for(int i = 0 ; i<n ;i++){
        char start = ch+i ;                  //yaha hamne ek aur chr define kiya !
        for(int j = 0 ; j < (i+1) ; j++){    //must solve everytime you're revising this! 
            cout << start ;
            start --;                        //har line me reverse me alphabet print hoga
        }
        ch = ch+(i+1);
        cout << endl;
    }

  
//Inverted triangle logic:
    int n;
    cin >> n;
    char ch ='A';
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<i ; j++){    //i times spaces                // AAAA
            cout << " ";                                             //    BBB
        }                                                          //       CC
        char start = ch;                                         //          D
        for(int j = 0 ; j<(n-i) ;j++){   //(n-i)times number
                cout << ch;                        
        }
        ch++;                         
        cout << endl;
    }    


//Pyramid pattern:
    int n;
    cin >> n ;
    for(int i=0 ;i<n ;i++){
        for(int j = 0 ; j<(n-i-1) ; j++){
            cout << " ";                          
        }
        for(int j = 0 ; j<(i+1) ; j++){
            cout << (j+1);
        }
        for(int j = i ; j>0 ; j--){
            cout << j;
        }
        cout << endl;
    }



//Hollow diamond pattern:divide the big problems into small parts and try to solve that!
    int n ;
    cin >> n ;
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<(n-i-1) ; j++){
            cout << " ";
        }
        cout << "*";


        if ( i!=0 ){
            for(int j=0 ; j<(2*i)-1 ; j++){
            cout << " ";
        }
        cout << "*";
        }

        cout << endl;
    }


    for(int i = 0 ; i<(n-1) ; i++){
        for(int j=0 ; j<(i+1) ; j++){
            cout << " ";
        }

        cout << "*" ;


        if( i != (n-2)){
            for(int j=0 ; j<2*(n-i)-5 ; j++){
            cout << " ";
        }
            cout << "*" ; 
        }
        cout << endl;
    }


//Butterfly pattern : HW problem    
           
    return 0;
}

//outer loop->kitne lines hai(utne hi baar loop chalega)
//inner loop->har line me kya krna hai
            // ->count how many character to print(utni hi baar loop chalega)
            // ->kya print karana hai