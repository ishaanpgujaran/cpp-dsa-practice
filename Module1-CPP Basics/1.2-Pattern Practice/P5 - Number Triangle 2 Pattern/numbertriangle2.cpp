// Pattern 5 - Triangle for Numbers 2
#include<iostream>
using namespace std ; 

// Our Own Approach
int ownApproach() {
    // Define n 
    int n = 9 ;
    cout << "\n# Pattern 5 Own Approach #\n" << endl ;

    // Outer Loop = No. of Rows = n lines 
    for(int i = 0; i < n ; i++) {
        // Define Starting Character Variable 
        int num = 1 ;

        // Inner Loop = No. of Characters in each Row= i + 1 characters
        for(int j = 0 ; j < i + 1 ; j++) {

            // Printing Character on Each Line 
            cout << num << " " ;

            // Increment Variable for Next Character in the Row
            num++ ;
        }

        // Move to Next Line
        cout << endl ;
    }
    return 0 ;
}

//Ideal Approach
int idealApproach() {
    // Define n 
    int n = 9 ;
    cout << "\n## Pattern 5 Ideal Approach ##\n" << endl ;

    // Outer Loop = No. of Rows = n lines 
    for(int i = 0; i < n ; i++) {
        
        // Inner Loop = No. of Characters in each Row= i + 1 characters
        
        // We will use j to Print the Pattern Smartly
            // I - We can Either Start from j=1 & Run Loop for i+1 times (j <= i+1) & Print j 
            // II - Or We can Start from j=1 & Run Loop for i+1 times (j < i+2) & Print j
            // III - Or We can Start from j=0 & Run Loop for i+1 times (j < i+1) & Print j+1
        
        // Option III
        for(int j = 0 ; j < i + 1 ; j++) {

            // Printing j for Prining Character on Each Line 
            cout << (j+1) << " " ;
        }

        // Move to Next Line
        cout << endl ;
    }
    
    return 0 ;
}

int main() {
    cout << "\n** Pattern 5 - Number Triangle 2 Pattern **" << endl ;
    
    ownApproach() ;
    
    cout << "______________________________________________" << endl ;

    idealApproach() ;
    
    return 0 ;
}
