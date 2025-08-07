// Pattern 12 - Pyramid Numbers Pattern
#include <iostream>
using namespace std;

int main() {
    cout << "\n** Pattern 12 - Pyramid Numbers Pattern **\n" << endl ;

    // Define the Number of Lines to Print
    int n = 9 ;

    // Outer Loop, Decides How many Lines to Print = Run n times
    for(int i = 0 ; i < n ; i++) {
    
        // Inner Loop 1 = Prints Spaces - Runs n-(i+1) times or n-i-1 times (Both Works Same)
        for(int j = 0 ; j < n-(i+1) ; j++){
            cout << " " ;
        }

        // Inner Loop 2 = Prints Left Side Numbers - Runs (i+1) times
        // Run from 0 to < i+1 & Print j+1 OR Run from 1 to <= i+1 & Print j (Both Works Same)
        for(int j = 0 ; j < (i+1) ; j++) {
            cout << (j+1) ;
        }

        // Inner Loop 3 = Prints Right Side Number - Runs i times but Backward Loop
        // Run from i to > 0 & Print j OR Run from i to >= 1 & Print j (Both Works Same) 
        for(int j = i ; j > 0 ; j--) {
            cout << j ;
        }
        
        // Move to Next Line After all 3 Loops Complete
        cout << endl ;
    }
    return 0 ;
}