//Module 1 : P1 - SD2b :- Operators
//Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran
#include <iostream>
using namespace std;

int main () {
    cout << "____________________________________________" << endl ;
    cout << "\n*** Module 1 : P1 - SD2b ***" << endl ;
    cout << "Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran" << endl ;
    cout << "____________________________________________" << endl ;
    
    //Operator Calculator
    cout << "\n**Calculator using Operators**" << endl ; 
    cout << "____________________________________________" << endl ;
    cout << "Operation Performed : " << endl ;
    cout << "1. Addition" << endl ;
    cout << "2. Subtraction" << endl ;
    cout << "3. Multiplication" << endl ;
    cout << "4. Division" << endl ;
    cout << "5. Modulus/Modulo" << endl ;
    cout << "6. Increment" << endl ;
    cout << "7. Decrement" << endl ;
    cout << "----------------------------" << endl;
    //Taking Input
    int n1 , n2 ;
    cout << "\nEnter Integer Number 1 = " ;
    cin >> n1 ;
    cout << "Enter Integer Number 2 = " ; 
    cin >> n2 ;
    cout << "----------------------------" << endl;

    //Addition 
    int sum = n1 + n2 ;
    cout << "\nAddition of " << n1 << " & " << n2 << " = " << sum << endl ;
    cout << "----------------------------" << endl;

    //Subtraction
    int sub = n1 - n2 ;
    cout << "\nSubtraction of " << n1 << " & " << n2 << " = " << sub << endl ;
    cout << "----------------------------" << endl;

    //Multiplication 
    int mul = n1 * n2 ;
    cout << "\nMultiplication of " << n1 << " & " << n2 << " = " << mul << endl ;
    cout << "----------------------------" << endl;

    //Division 
    float div = (float) n1 / n2 ;
    cout << "\nDivision of " << n1 << " & " << n2 << " = " << div << endl ;
    cout << "----------------------------" << endl;

    //Modulus|Modulo
    int mod = n1 % n2 ;
    cout << "\nModulus/Modulo of " << n1 << " & " << n2 << " = " << mod << endl ;
    cout << "----------------------------" << endl;

    //Pre Increment
    int o1 , o2 ; 
    o1 = n1 ; 
    o2 = n2 ;
    int npre1 = ++o1 ;
    int npre2 = ++o2 ;
    cout << "Pre Increment of " << n1 << " = " << npre1 << endl ;
    cout << "Pre Increment of " << n2 << " = " << npre2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 :- " << n1 << " Changes to = " << o1 << endl ;
    cout << "Original Number 2 :- " << n2 << " Changes to = " << o2 << endl ;
    cout << "----------------------------" << endl;

    //Post Increment
    o1 = n1 ; 
    o2 = n2 ;
    int npos1 = o1++ ;
    int npos2 = o2++ ;
    cout << "Post Increment of " << n1 << " = " << npos1 << endl ;
    cout << "Post Increment of " << n2 << " = " << npos2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 :- " << n1 << " Changes to = " << o1 << endl ;
    cout << "Original Number 2 :- " << n2 << " Changes to = " << o2 << endl ;
    cout << "----------------------------" << endl;

    //Pre Decrement
    o1 = n1 ; 
    o2 = n2 ;
    int npred1 = --o1 ;
    int npred2 = --o2 ;
    cout << "Pre Decrement of " << n1 << " = " << npred1 << endl ;
    cout << "Pre Decrement of " << n2 << " = " << npred2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 :- " << n1 << " Changes to = " << o1 << endl ;
    cout << "Original Number 2 :- " << n2 << " Changes to = " << o2 << endl ;
    cout << "----------------------------" << endl;

    //Post Decrement
    o1 = n1 ; 
    o2 = n2 ;
    int nposd1 = o1-- ;
    int nposd2 = o2-- ;
    cout << "Post Decrement of " << n1 << " = " << nposd1 << endl ;
    cout << "Post Decrement of " << n2 << " = " << nposd2 << endl ;
    cout << "\nFor Checking Change : " << endl ;
    cout << "Original Number 1 :- " << n1 << " Changes to = " << o1 << endl ;
    cout << "Original Number 2 :- " << n2 << " Changes to = " << o2 << endl ;
    cout << "----------------------------" << endl;

    return 0;
}