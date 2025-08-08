// Pattern 14 - Butterfly Pattern
#include<iostream>
using namespace std ;

int main() {
    cout << "\n** Pattern 13 - Butterfly Pattern **\n" << endl ;

    // Define No. of Lines to Print 
    int n = 4 ;

    // Outer Loop 1 - Prints Upper Part of Stars from Line No. 1(i=0) to Line No. n(i=n-1)
    // We have halved the pattern, so in both Part, Number of Lines to Print is n
    // Runs n Times
    for(int i = 0 ; i < n ; i++) {
        
        // Inner Loop 1 - Prints Star Set 1 : No. of Stars are related by i
        // Runs i+1 times
        for (int j = 0 ; j < (i+1) ; j++) {
            cout << "*";
        }

        // Inner Loop 2 - Prints Entire Middle Spaces : Number of Spaces are related by both n & i
        // Runs 2*n-i-1 times beacuse if we divide space into half , the relation is n-i-1 , 
        // Hence twice of it gives entire middle space
        for (int j = 0 ; j < 2*(n-i-1) ; j++) {
            cout << " ";
        }

        // Inner Loop 3 - Prints Star Set 2 : No. of Stars are related by i
        // Runs i+1 times
        for(int j = 0 ; j < (i+1) ; j++) {
            cout << "*" ;
        }

        // Move to Next Line after Stars & Spaces are Printed
        cout << endl ;
    }

    // Outer Loop 2 - Prints Lower Part of Stars from Line No. n+1(i=n) to Line No. 2n(i=2n-1)
    // As we have halved , Number of Lines to is still n  
    // Runs n Times
    for(int i = 0 ; i < n ; i++) {
        
        // Inner Loop 1 - Prints Star Set 1 : No. of Stars are related by n & i
        // Runs n-i times
        for(int j = 0 ; j < (n-i) ; j++) {
            cout << "*" ;
        }

        // Inner Loop 2 - Prints Entire Middle Spaces : Number of Spaces are related by i
        // Runs 2*i times
        for(int j = 0 ; j < 2*i ; j++) {
            cout << " " ;
        }

        // Inner Loop 3 - Prints Star Set 2 : No. of Stars are related by n & i
        // Runs n-i times
        for(int j = 0 ; j < (n-i) ; j++) {
            cout << "*" ;
        }

        // Move to Next Line after Stars & Spaces are Printed
        cout << endl ;
    }

    // If we want more stretched Butterfly - Add Extra Space After Every Print Statement
    // Add Extra Space After Star , Space Print Statements
    return 0 ;
}