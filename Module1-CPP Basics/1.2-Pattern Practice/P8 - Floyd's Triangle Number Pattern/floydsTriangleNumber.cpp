// Patter 8 - Floyd's Triangle Number Pattern
#include<iostream>
using namespace std ;

int main() {
    cout << "\n** Pattern 8 - Floyd's Triangle Number Pattern **\n" << endl ;

    // Define the Number of Lines to Print
    int n = 9 ;

    // Define the Starting Character 
    int num = 1 ;

    // Outer Loop, Decides How many Lines - Run n Times
    for(int i = 0 ; i < n ; i++) {
        
        // Inner Loop, Decides How many Characters in Each Line & What to Print
        // We will Print i+1 times - Run i+1 times ,Print num & Increment num
        for(int j = 0 ; j < i+1 ; j++) {
            
            // Print Character 
            cout << num << " " ;

            // Increment num for Printing Next Character in Same Line
            num++ ;
        }

        // Move to Next Line 
        cout << endl ;
    }

    return 0 ;
}