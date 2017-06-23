// Your first program!

/*#include <iostream>
#include "console.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
*/


#include <iostream>
#include "console.h"

using namespace std;
int main()
{
    cout << "This program finds teh largest integer in a list. " << endl;
    cout << "Enter 0 to signal the end of the list." << endl;
    int a, b, c;
    cout << "?";
    cin >> a;
    c = b = a;

    cout << "The largest value was " << a << "." << endl;
    cout << "The second largest value was " << b << "." << endl;
    return 0;
}
