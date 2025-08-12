// Function Practice 2 - Calculating N Factorial
// N Factorial is Multiplying all Number from 1 to N (N Times)
#include <iostream>
using namespace std ;

// Function to Calculate Factorial of a number - This time trying with void
void nFactorial(int n) {
    cout << "Factorial of " << n << " = " ;

    int fact = 1 ;

    for(int i = 1 ; i <= n ; i++) {
        fact *= i ;
    }

    cout << fact << endl ;
}

int main() {
    cout << "\n** Function Practice 2 - Calculating N Factorial **" << endl ;
    cout << "--------------------------------------------------------" << endl ;

    // Invoking or Calling the Function
    nFactorial(0) ;

    return 0 ;
}
