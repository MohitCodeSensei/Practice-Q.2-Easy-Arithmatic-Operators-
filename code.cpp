//Question 2: The Swap Challenge (Level: Medium)
//Write a program that takes two integer inputs, A and B. Your task is to swap their values without using a third (temporary) variable.
// Hint: Use addition and subtraction operators to "store" the sum temporarily.
// Focus: Creative use of Arithmetic Operators.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter A: ";
    cin >> a; // Let's say A = 10
    cout << "Enter B: ";
    cin >> b; // Let's say B = 20

    // Step 1: Combine both values into 'a'
    a = a + b; // a is now 30

    // Step 2: Extract original 'a' into 'b'
    b = a - b; // 30 - 20 = 10 (b now holds original a)

    // Step 3: Extract original 'b' into 'a'
    a = a - b; // 30 - 10 = 20 (a now holds original b)

    cout << "\nAfter Swapping:" << endl;
    cout << "A: " << a << " B: " << b << endl;

    return 0;
}
