//Module 1 : P1 - SD3a :- if | else if | else | Ternary Statement 
//Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran
#include <iostream>
using namespace std ;

int main () {
    cout << "____________________________________________" << endl ;
    cout << "\n*** Module 1 : P1 - SD3a ***" << endl ;
    cout << "Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran" << endl ;
    cout << "____________________________________________" << endl ;

    //if , else-if & else
    cout << "\n** Reward Points Calculator **" << endl ;
    cout << "------------------------------------" << endl ;

    cout << "Welcome to Reward Point Calculator !!" << endl ;
    cout << "How To Use : Enter your Top Three Purchases --> We will Calculate Reward Points" << endl ;
    cout << "------------------------------------" << endl ;

    cout << "\nPurchase Details" << endl ;
    cout << "------------------------------------" << endl ;
    float p1 , p2 , p3 ;
    cout << "Purchase 1 = Rs " ;
    cin >> p1 ;
    cout << "Purchase 2 = Rs " ;
    cin >> p2 ; 
    cout << "Purchase 3 = Rs " ;
    cin >> p3 ;
    cout << "------------------------------------" << endl ;
    float sum = p1 + p2 + p3 ;
    float rp ;
    cout << "Total Purchase Amount = Rs " << sum << endl ; 
    
    if (sum >= 20000) {
        rp = 0.4 * sum ;
        cout << "\nYour Reward Points = " << rp << " Points :)" << endl ;
    } else if (sum < 20000 && sum >= 15000) {
        rp = 0.3 * sum ;
        cout << "\nYour Reward Points = " << rp << " Points :)" << endl ;
    } else if (sum < 15000 && sum >= 10000) {
        rp = 0.2 * sum ;
        cout << "\nYour Reward Points = " << rp << " Points :)" << endl ;
    } else if (sum < 10000 && sum >= 5000) {
        rp = 0.1 * sum ;
        cout << "\nYour Reward Points = " << rp << " Points :)" << endl ;
    } else if (sum < 5000 && sum >= 2000) {
        rp = 0.05 * sum ;
        cout << "\nYour Reward Points = " << rp << " Points :)" << endl ;
    } else {
        rp = 0.0 ;
        cout << "\nYour Reward Points = " << rp << " Points ):" << endl ;
    }

    //Ternary Statement
    cout << (sum >=2000 ? "Congratulations You Earned Reward Points !!" : "Shop More for Reward Poins !!") << endl ;
    cout << "____________________________________________" << endl ;
    return 0 ;
}