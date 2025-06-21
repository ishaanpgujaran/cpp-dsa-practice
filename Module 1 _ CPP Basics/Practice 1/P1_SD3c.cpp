//Module 1 - SD3c :- Prime Numbers using COndittional Statements & Loops
//Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran

#include<iostream>
using namespace std ;

int main () {
    cout << "____________________________________________" << endl ;
    cout << "\n*** Module 1 : P1 - SD3c ***" << endl ;
    cout << "Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran" << endl ;
    cout << "____________________________________________" << endl ;

    int targetNum = 0 ;

    // //Logic 1 - Using for Loop with Bool
    // cout << "\n** Prime Number Checker Using for Loop with Bool **" << endl ;
    // cout << "------------------------------------" << endl ;
    // cout << "How to Use -> Enter Number & We will Check Prime or Not" << endl ;

    // cout << "\nEnter the Number to Check : " ;
    // cin >> targetNum ;
    // bool isPrime = true ;

    // for (int i = 2 ; i <= targetNum-1 ; i++) {
    //     if (targetNum % i == 0) {
    //         isPrime = false ;
    //         break ;
    //     }
    // }

    // if (isPrime == true) {
    //     cout << "\n------------------------------------" << endl ;
    //     cout << "Congratulation !!" << endl ;
    //     cout << "Number " << targetNum << " is a Prime Number :D" << endl ;
    //     cout << "------------------------------------" << endl ;
    // } else {
    //     cout << "\n------------------------------------" << endl ;
    //     cout << "Oh No !!" << endl ;
    //     cout << "Number " << targetNum << " is Not a Prime Number :(" << endl ;
    //     cout << "------------------------------------" << endl ;
    // }
    // cout << "____________________________________________" << endl ;


    // //Logic 2.1 - Using for Loop without Bool
    // cout << "\n** Prime Number Checker Using for Loop without Bool L1 **" << endl ;
    // cout << "------------------------------------" << endl ;
    // cout << "How to Use -> Enter Number & We will Check Prime or Not" << endl ;

    // cout << "\nEnter the Number to Check : " ;
    // cin >> targetNum ;
    
    // for (int i = 2 ; i <= targetNum-1 ; i++) {
    //     if (targetNum % i == 0) {
    //         cout << "\n------------------------------------" << endl ;
    //         cout << "Oh No !!" << endl ;
    //         cout << "Number " << targetNum << " is Not a Prime Number :(" << endl ;
    //         cout << "------------------------------------" << endl ;
    //         return 0 ; //Exit Directly
    //     } 
    // }
    // cout << "\n------------------------------------" << endl ;
    // cout << "Congratulation !!" << endl ;
    // cout << "Number " << targetNum << " is a Prime Number :D" << endl ;
    // cout << "------------------------------------" << endl ;
    // cout << "____________________________________________" << endl ;

    // //Logic 2.2 - Using for Loop without Bool
    // cout << "\n** Prime Number Checker Using for Loop without Bool L2 **" << endl ;
    // cout << "------------------------------------" << endl ;
    // cout << "How to Use -> Enter Number & We will Check Prime or Not" << endl ;

    // cout << "\nEnter the Number to Check : " ;
    // cin >> targetNum ;
    
    // int i ;
    // for (i = 2 ; i <= targetNum-1 ; i++) {
    //     if (targetNum % i == 0) {
    //         cout << "\n------------------------------------" << endl ;
    //         cout << "Oh No !!" << endl ;
    //         cout << "Number " << targetNum << " is Not a Prime Number :(" << endl ;
    //         cout << "------------------------------------" << endl ;
    //         break ;
    //     } 
    // }
    // if (i == targetNum) {
    //     cout << "\n------------------------------------" << endl ;
    //     cout << "Congratulation !!" << endl ;
    //     cout << "Number " << targetNum << " is a Prime Number :D" << endl ;
    //     cout << "------------------------------------" << endl ;
    //     cout << "____________________________________________" << endl ;
        
    // }

    // //Logic 3 - Using while Loop without bool
    // cout << "\n** Prime Number Checker Using while Loop without bool **" << endl ;
    // cout << "------------------------------------" << endl ;
    // cout << "How to Use -> Enter Number & We will Check Prime or Not" << endl ;

    // cout << "\nEnter the Number to Check : " ;
    // cin >> targetNum ;
    // int i = 2 ;

    // while (i <= targetNum-1) {
    //     if (targetNum % i == 0) {
    //         cout << "\n------------------------------------" << endl ;
    //         cout << "Oh No !!" << endl ;
    //         cout << "Number " << targetNum << " is Not a Prime Number :(" << endl ;
    //         cout << "------------------------------------" << endl ;
    //         cout << "____________________________________________" << endl ;
    //         return 0 ;
    //     }
    //     i++ ; 
    // }
    // cout << "\n------------------------------------" << endl ;
    // cout << "Congratulation !!" << endl ;
    // cout << "Number " << targetNum << " is a Prime Number :D" << endl ;
    // cout << "------------------------------------" << endl ;
    
    // //Logic 4.1 - Better Approach with Bool
    // cout << "\n** Prime Number Checker - Better Approach with Bool **" << endl ;
    // cout << "------------------------------------" << endl ;
    // cout << "How to Use -> Enter Number & We will Check Prime or Not" << endl ;

    // cout << "\nEnter the Number to Check : " ;
    // cin >> targetNum ;
    // bool isPrime = true ;

    // for (int i = 2 ; i * i <= targetNum ; i++) {
    //     if (targetNum % i == 0) {
    //         isPrime = false ;
    //         break ;
    //     }
    // }

    // if (isPrime == true) {
    //     cout << "\n------------------------------------" << endl ;
    //     cout << "Congratulation !!" << endl ;
    //     cout << "Number " << targetNum << " is a Prime Number :D" << endl ;
    //     cout << "------------------------------------" << endl ;
    // } else {
    //     cout << "\n------------------------------------" << endl ;
    //     cout << "Oh No !!" << endl ;
    //     cout << "Number " << targetNum << " is Not a Prime Number :(" << endl ;
    //     cout << "------------------------------------" << endl ;
    // }
    // cout << "____________________________________________" << endl ;
    
    
    //Logic 4.2 - Better Approach without Bool
    cout << "\n** Prime Number Checker Using Better Approach **" << endl ;
    cout << "------------------------------------" << endl ;
    cout << "How to Use -> Enter Number & We will Check Prime or Not" << endl ;

    cout << "\nEnter the Number to Check : " ;
    cin >> targetNum ;
    
    for (int i = 2 ; i * i <= targetNum ; i++) {
        if (targetNum % i == 0) {
            cout << "\n------------------------------------" << endl ;
            cout << "Oh No !!" << endl ;
            cout << "Number " << targetNum << " is Not a Prime Number :(" << endl ;
            cout << "------------------------------------" << endl ;
            return 0 ; //Exit Directly
        } 
    }
    cout << "\n------------------------------------" << endl ;
    cout << "Congratulation !!" << endl ;
    cout << "Number " << targetNum << " is a Prime Number :D" << endl ;
    cout << "------------------------------------" << endl ;
    cout << "____________________________________________" << endl ;

    return 0 ;   
}