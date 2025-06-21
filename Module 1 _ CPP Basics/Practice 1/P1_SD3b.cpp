//Module 1 - SD3b :- while loop | for loop | do-while loops | Nested Loops | Break
//Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran

#include <iostream>
using namespace std ;

int main () {
    cout << "____________________________________________" << endl ;
    cout << "\n*** Module 1 : P1 - SD3b ***" << endl ;
    cout << "Created by : Ishaan Gujaran | linkedin.com/in/ishaangujaran" << endl ;
    cout << "____________________________________________" << endl ;

    cout << "\n** Point of Sales Dashboard **" << endl ;
    cout << "------------------------------------" << endl ;
    cout << "Welcome to POS Dashboard" << endl ;
    cout << "How to Use -> Enter number of Customers & number of Items " << endl ;

    int nc = 0 ; 
    cout << "\nEnter Number of Customers = " ;
    cin >> nc ;
    cout << "\n# Sales Record #" << endl ;
    cout << "------------------------------------" << endl ;

    //for loop 
    for (int i = 1 ; i <= nc ; i++) {
        cout << "\nCustomer " << i << " Details " << endl ;
        cout << "_______________________________" << endl ;
        string nm ;
        int ni = 0 ;
        int j = 1 ;
        cout << "Name : " ;
        cin >> nm ;
        cout << "Number of Products Purchased : " ;
        cin >> ni ;
        
        //break
        if (ni == 0) {
            break ;
        }
    
        //while loop
        while (j <= ni) {
            string it ;
            int qty = 0 , price = 0 , dis = 0 , total = 0 ;
            int k = 1 ;
            cout << "\n    Item " << j << " Details" << endl ;
            cout << "    ---------------------" << endl ;
            cout << "    Item Name : " ;
            cin >> it ;
            cout << "    Quantity : " ;
            cin >> qty ;
            cout << "    Price : Rs " ;
            cin >> price ;
            cout << "    Item Total = Rs " << (qty * price) << endl ;
            
            //do-while loop
            do {
                dis += 0.05 * (qty * price);
                total = (qty * price) - dis ;
                k++; 
            }while (k <= qty) ;
            cout << "    ---------------------" << endl ;
            cout << "    Discount = Rs " << dis << endl ;
            cout << "    Final Total = Rs " << total << endl ;
            cout << "    ---------------------" << endl ;
            j++;
        }
    }
    cout << "____________________________________________" << endl ;
    
    return 0 ;
}