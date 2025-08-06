// Pattern 10 - Inverted Triangle Characters Pattern
#include <iostream>
using namespace std;

int main() {
    cout << "\n** Pattern 10 - Inverted Triangle Characters Pattern **\n" << endl ; 

    // Define the Number of Lines
    int n = 9 ;

    // Define Starting Character Outside as we do not want to start with Same letter in Each Line
    char ch = 'A' ;

    // Outer Loop, Decided How many rows = n Lines 
    for(int i = 0 ; i < n ; i++) {

        // Inner Loop 1, Decides How many Spaces to Print = Runs i times
        for(int j = 0 ; j < i ; j++) {
            //Print Space
            cout << " " ;
        }

        // Inner Loop 2, Decides How many Characters to Print = Runs n-1 times 
        for(int j = 0 ; j < n-i ; j++) {
            // Print Character
            cout << ch ;
        }

        // Increment Character to Print Next Character in Next Line
        ch++ ;

        // Move to Next Line After Completing Both Loops
        cout << endl ;
    }

    return 0 ;
}