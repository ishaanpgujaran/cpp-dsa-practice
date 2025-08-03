// Pattern 5 - Triangle for Numbers 2
#include<iostream>
using namespace std ; 

int main() {

    // Define n 
    int n = 9 ;
    cout << "\n** Pattern 5 - Number Triangle 2 Pattern **\n" << endl ;

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
