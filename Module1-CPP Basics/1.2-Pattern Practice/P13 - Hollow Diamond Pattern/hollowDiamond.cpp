// Pattern 13 - Hollow Diamond Pattern
#include <iostream>
using namespace std;

int ownApproach() {
    cout << "\n## Pattern 13 - Own Approach ##\n" << endl ;

    int n = 5 ;

    // Outer Loop 1 - Prints Upper Half Part of Stars from Line 1(i=0) to Line n(i=n-1) = Runs n times
    for(int i = 0 ; i < n ; i++) {

        // Inner Loop 1 - Print Starting Spaces = Runs n-i-1 times 
        for(int j = 0 ; j < n-i-1 ; j++) {
            cout << " " ;
        }

        // Print Star Set 1
        cout << "*" ;
        

        // Inner Loop 2 - Prints Middle Spaces = Runs Odd Times 2*i-1 Times
        for(int j = 0 ; j < 2*i-1 ; j++) {
            cout << " " ;
        }

        // Print Star Set 2 except for Line 1 (i=0)
        // We can either Print for i>0 OR i!=0 (Both Works Same)
        if (i > 0) cout << "*" ;

        // Move to Next Line after Both Stars & Both Loops are Printed
        cout << endl ;
    } 
    

    // Outer Loop 2 - Prints Lower Half Part of Stars from Line n+1(i=n) to Line n+3(i=n+2)
    // There is always n-1 Lines in Lower Part hence we will Run Loop n-1 Times
    // Make it Backward Loop so that Conditions can be wrriten for Inner Loops Easily
    // Run from i=n-1 to > i=0 OR Run from i=n-2 to >= 0 (Both Works same = n-1 times)
    for(int i = n-2 ; i >= 0 ; i--) {

        // Inner Loop 1 - Print Starting Spaces = Runs n-i-1 times 
        // If we use i=n-1 then Run from j=0 to < n-i 
        for(int j = 0 ; j < n-i-1 ; j++) {
            cout << " ";
        }

        // Print Star Set 1
        cout << "*";

        // Inner Loop 2 - Prints Middle Spaces = Runs Odd Times 2*i-1 Times
        // Use Backward Loop as Spaces Decrease Odd Times as i increases
        // If we use i=n-1 then Run from j=2*i-3 to > 0
        for(int j = 2*i-1 ; j > 0 ; j--) {
            cout << " ";
        }

        // Print Star Set 2 except Last Line n+3 (i=n+2)
        // We can either Print for i>0 OR i!=0 (Both Works Same)
        if(i > 0) cout << "*";

        // Move to Next Line after Both Stars & Both Loop are Printed
        cout << endl;
    }

    return 0 ;
}

int sdApproach() {
    cout << "\n## Pattern 13 - SD Approach ##\n" << endl ;

    int n = 5 ;

    // Outer Loop 1 - Prints Upper Half Part of Stars from Line 1(i=0) to Line n(i=n-1) = Runs n times
    for(int i = 0 ; i < n ; i++) {

        // Inner Loop 1 - Print Starting Spaces = Runs n-i-1 times 
        for(int j = 0 ; j < n-i-1 ; j++) {
            cout << " " ;
        }

        // Print Star Set 1
        cout << "*" ;
        
        // Middle Spaces & Star Set 2 will Only Print if i != 0 i.e. Except Line 1
        // We can either Print for i>0 OR i!=0 (Both Works Same)
        if(i != 0) {
            
            // Inner Loop 2 - Prints Middle Spaces = Runs Odd Times 2*i-1 Times
            for(int j = 0 ; j < 2*i-1 ; j++) {
                cout << " " ;
            }

            // Print Star Set 2 
            cout << "*" ;
        }
        
        // Move to Next Line after Both Stars & Both Loops are Printed
        cout << endl ;
    } 
    

    // Outer Loop 2 - Prints Lower Half Part of Stars from Line n+1(i=n) to Line n+3(i=n+2)
    // There is always n-1 Lines in Lower Part hence we will Run Loop n-1 Times
    // Run from i=0 to < i=n-1 (n-1 Times)
    for(int i = 0 ; i < n-1 ; i++) {

        // Inner Loop 1 - Print Starting Spaces = Runs i+1 Times as i+1 Spaces
        for(int j = 0 ; j < i+1 ; j++) {
            cout << " ";
        }

        // Print Star Set 1
        cout << "*";

        // Middle Spaces & Star Set 2 will Only Print if i != n-2 i.e. Except Last Line
        // We can either Print for i<n-2 OR i!=n-2 (Both Works Same)
        if(i != n-2) {
            
            // Inner Loop 2 - Prints Middle Spaces = Runs Odd Times 
            // But as we can see - If i Increases Spaces Decreases & If Spaces Increases i Decreases
            // Hence we will have to modify the condition of 2*i-1 to get desired spaces = Relate the Condition with n & i
            // We will do 2*(n-2-i)-1 - Relating n & i such that Odd Times spaces are printed wrt n & i
            // Simplify this 2*(n-2-i)-1 = 2n-4-2i-1 = 2n-2i-5 = 2(n-i)-5 : We will Use this as Condition
            for(int j = 0 ; j < 2*(n-i)-5 ; j++) {
                cout << " ";
            }

            // Print Star Set 2 
            cout << "*";
        }

        // Move to Next Line after Both Stars & Both Loop are Printed
        cout << endl;
    }

    return 0 ;
}

int main() {
    cout << "\n** Pattern 13 - Hollow Diamond Pattern **" << endl ;
    cout << "\n__________________________________________" << endl ;
    
    ownApproach() ;

    cout << "\n__________________________________________" << endl ;

    sdApproach() ;

    cout << "\n" ;
}
