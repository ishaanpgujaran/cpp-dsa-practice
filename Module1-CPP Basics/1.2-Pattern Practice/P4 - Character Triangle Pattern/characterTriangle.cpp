// Pattern 3 - Triangle Pattern for Numbers
#include<iostream>
using namespace std ;

int main () {
    int n = 9 ;
    cout << "\n** Pattern 4 - Character Triangle Pattern **\n" << endl ;

    // Define ch Starting Character Variable 
    char ch = 'A' ; 
    
    // Outer Loop for Each Row - n Rows will Print
    for (int i = 0; i < n; i++) {
        
        // Inner Loop for Each Character - i+1 Characters will Printin each Row
        for (int j=0; j < i+1; j++) {
            // Print Character
            cout << ch << " ";
        }

        // Increment for Next Character
        ch++ ;
        
        // Move to Next Line
        cout << endl ;
    }

    return 0 ;
}