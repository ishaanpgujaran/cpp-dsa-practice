// Pattern 6 - Reverse Triangle Number Pattern
#include<iostream>
using namespace std ;

int main() {
    cout << "\n** Pattern 6 - Reverse Triangle Number Pattern **\n" << endl;

    // Define the Number of Lines to Print
    int n = 9 ; 

    // Outer Loop : Decides How many Lines - Run n Times
    for(int i = 0 ; i < n ; i++) {
        
        // Inner Loop : Decides How many Characters in Each Line & What to Print
        // We will Print i+1 times - Run i+1 times 
        // As Reverse Order, We will Reverse the Condition : Run from i+1 to 1 & print j
        for(int j = i+1 ; j > 0 ; j--) {
            // Print j for Character in each line
            cout << j << " " ;
        }

        // Move to Next Line
        cout << endl ;
    }

    return 0 ;
}