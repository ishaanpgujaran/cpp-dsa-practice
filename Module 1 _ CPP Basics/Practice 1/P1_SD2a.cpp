//Module 1 : P1 - SD2.1 :- Type Conversion | Type Casting 
//Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran
#include <iostream>
using namespace std;

int main () {
    cout << "____________________________________________" << endl ;
    cout << "\n*** Module 1 : P1 - SD2 ***" << endl ;
    cout << "Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran" << endl ;
    cout << "____________________________________________" << endl ;
    
    //Type Conversion 
    cout << "\n\n** Type Conversion **" << endl ;
    cout << "____________________________________________" << endl ;
    //Converting Character to Integer
    char l1 ;
    cout << "\n-- Converting Character to Integer --" << endl ;
    cout << "-----------------------------------------" << endl;
    cout << "Enter a Character = " ;
    cin >> l1 ;
    int l2 = l1 ;
    cout << "Converted Integer Value = " << l2 << endl ;

    //Converting Integer to Double 
    cout << "\n\n-- Converting Integer to Double --" << endl ;
    cout << "-----------------------------------------" << endl;
    int f1 ;
    cout << "Enter an Integer Number = " ;
    cin >> f1 ;
    double f2 = f1 ;
    cout << "Converted Double Value = " << f2 << endl ;
    cout << "____________________________________________" << endl ;

    //Type Casting
    cout << "\n\n** Type Casting **" << endl ;
    cout << "____________________________________________" << endl ;
    //Converting Double to Integer 
    cout << "\n-- Converting Double to Integer --" << endl ;
    cout << "-----------------------------------------" << endl;
    double d1 ;
    cout << "\n\nEnter a Decimal Number = " ;
    cin >> d1 ;
    int i1 = (int)d1 ;
    cout << "Converted Integer Value = " << i1 << endl ;
    cout << "____________________________________________\n" << endl ;

    return 0;
}