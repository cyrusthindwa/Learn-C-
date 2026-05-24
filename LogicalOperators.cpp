#include <iostream>

using namespace std;
int main () {
    int a = 5;
    int b = 20;
    int c;

    if ( a && b ) {
        cout << "Line 1 - a and b are true" << endl;
    }

    if (a || b ) {
        cout << "Line 2 - Either a or b is true" << endl;
    }
    /* Lets change value of a and b */
    a = 0;
    b = 10;

    if ( a && b ) {
        cout << "Line 3 - a and b are true" << endl;
    } else {
        cout << "Line 3 - Either a or b is false" << endl;
    }

    if ( !(a && b) ) {
        cout << "Line 4 - a and b are false" << endl;
    }
}