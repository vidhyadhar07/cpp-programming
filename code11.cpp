#include <iostream>

using namespace std;

// Call by Value

void callByValue(int x) // x formal parameter

{

x = x + 5;

cout << "Inside Call by Value, x =" << x << endl;

}

// Call by Reference

void callByReference (int &y)

// y formal parameter

{

y = y + 5;

cout << "Inside Call by Reference, y = " << y << endl;

}

int main()

{

int a = 10;

// actual parameter variable

cout << "Before function calls, a = " << a << endl;

callByValue(a);

// a actual parameter

cout << "After Call by Value, a = " << a << endl;

callByReference(a); // a actual parameter

cout << "After Call by Reference, a =" << a << endl;
return 0;
}

