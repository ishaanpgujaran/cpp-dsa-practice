// Function Practice 1 - Sum of Numbers from 1 to N 
#include <iostream>
using namespace std;

// Funtion to Calculate Sum of 1 to N
int ownApproach(int n) {
    int sum = 0 ;
    
    cout << "\n## Own Approach - Using for Loop ##\n" << endl ;
    cout << "Sum of Numbers from 1 to " << n << " = " ;

    // For Loop for Adding All Numbers
    for(int i = 1 ; i <= n ; i++) {
        sum += i ;
    }

    return sum ;
}

int approach2(int n) {
    int sum = 0 ;

    cout << "\n## Approach 2 - Using Formula ##\n" << endl ;
    cout << "Sum of Numbers from 1 to " << n << " = " ;

    // Using Formula for Sum of First N Natural Numbers
    sum = (n * (n + 1)) / 2;

    return sum ;
}

// Main Funtion 
int main() {
    cout << "\n** Function Practice 1 - Sum of Numbers from 1 to N **" << endl ;
    cout << "--------------------------------------------------------" << endl ;

    // Invoking or Calling the Functions
    cout << ownApproach(9) << endl ;

    cout << "--------------------------------------------------------" << endl ;

    cout << approach2(9) << endl ;
    

    return 0 ;
}