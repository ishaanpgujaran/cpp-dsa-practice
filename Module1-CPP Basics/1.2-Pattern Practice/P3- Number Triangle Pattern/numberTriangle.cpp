// Pattern 3 - Triangle Pattern for Numbers
#include<iostream>
using namespace std ;

int main () {
    int n = 9 ;
    cout << "\n** Number Triangle Pattern **\n" << endl ;
    // Outer Loop for Each Row - n Rows will Print
    for (int i = 0; i < n; i++) {
        //Inner Loop for Each Character - i+1 Characters will Print
        for (int j=0; j < i+1; j++) {
            //Print Character - i + 1
            cout << (i + 1) << " ";
        }
        // Move to Next Line
        cout << endl ;
    }

    return 0 ;
}