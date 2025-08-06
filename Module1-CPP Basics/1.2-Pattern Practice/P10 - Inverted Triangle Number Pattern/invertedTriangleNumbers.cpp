// Pattern 10 - Inverted Triangle Number Pattern
#include <iostream>
using namespace std;

int main() {
    cout << "\n** Pattern 10 - Inverted Triangle Numbers Pattern **\n" ; 

    // Define the Number of Lines
    int n = 9 ;

    // Outer Loop, Decided How many rows = n Lines 
    for(int i = 0 ; i < n ; i++) {

        // Inner Loop 1, Decides How many Spaces to Print = Runs i times
        for(int j = 0 ; j < i ; j++) {
            //Print Space
            cout << " " ;
        }

        // Inner Loop 2, Decides How many Numbers to Print = Runs n-1 times & Prints i+1
        for(int j = 0 ; j < n-i ; j++) {
            // Print i+1
            cout << i+1 ;
        }

        // Move to Next Line After Completing Both Loops
        cout << endl ;
    }

    return 0 ;
}