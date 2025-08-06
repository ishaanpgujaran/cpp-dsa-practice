// Pattern 7 - Reverse Triangle Number Character
#include<iostream>
using namespace std ;

#include <iostream>
using namespace std;

int ownApproach() {
    cout << "\n# Pattern 7 - Own Approach #\n" << endl;

    // Define the Number of Lines to Print
    int n = 9 ; 

    // Outer Loop : Decides How many Lines - Run n Times
    for(int i = 0 ; i < n ; i++) {
        
        // As we want Reverse Order, Define Character Variable like this
        char ch = 'A' + i ;
        
        // Inner Loop : Decides How many Characters in Each Line & What to Print
        // We will Print i+1 times - Run i+1 times 
        // As Reverse Order, We will Reverse the Condition : Run from i+1 to 0 & print character
        // But either 0 to i+1 or i+1 to 0, Both will make sure Loop Run i+1 Times
        for(int j = i+1 ; j > 0 ; j--) {
            // Print ch for Character in each line
            cout << ch << " " ;
            ch-- ;
        }

        // Move to Next Line
        cout << endl ;
    }

    return 0 ;
}

int idealApproach() {
    cout << "\n## Pattern 7 - Ideal Approach ##\n" << endl;

    // Define the Number of Lines to Print
    int n = 9 ; 

    // Outer Loop : Decides How many Lines - Run n Times
    for(int i = 0 ; i < n ; i++) {
        
        
        // Inner Loop : Decides How many Characters in Each Line & What to Print
        // We will Print i+1 times - Run i+1 times 
        // As Reverse Order, We will Reverse the Condition : Run from i+1 to 0 & print character
        // But either 0 to i+1 or i+1 to 0, Both will make sure Loop Run i+1 Times
        for(int j = 0 ; j < i+1 ; j++) {
            
            // We will define, adjust & Print ch for Character in One Line
            cout << char('A'+i-j) << " " ;
        }

        // Move to Next Line
        cout << endl ;
    }

    return 0 ;
}

int main() {
    cout << "\n** Pattern 7 - Reverse Triangle Character Pattern **" << endl ;
    cout << "________________________________________________________" << endl ;

    ownApproach();
    
    cout << "________________________________________________________" << endl ;

    idealApproach();
}