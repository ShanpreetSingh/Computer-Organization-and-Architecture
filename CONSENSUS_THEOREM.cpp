#include <iostream>
using namespace std;

// PROOF OF CONSENSUS THEOREM IN BOOLEAN ALGEBRA:
// The consensus theorem states that: AB + A'C + BC = AB + A'C
// This program verifies the theorem by evaluating both sides for given inputs

// Function to perform logical AND operation
char And(char a, char b) {
    if (a == '1' && b == '1') {
        return '1';  // AND returns 1 only if both inputs are 1
    }
    return '0';      // otherwise returns 0
}

// Function to perform logical OR operation
char Or(char a, char b) {
    if (a == '0' && b == '0') {
        return '0';  // OR returns 0 only if both inputs are 0
    }
    return '1';      // otherwise returns 1
}

// Function to perform logical NOT operation (negation)
char Negate(char a) {
    if (a == '1') {
        return '0';  // NOT flips 1 to 0
    }
    return '1';     // and flips 0 to 1
}

int main() {
    char A, B, C;
    
    // Get input values from user
    cout << "Enter the value of A (0 or 1): " << endl;
    cin >> A;
    cout << "Enter the value of B (0 or 1): " << endl;
    cin >> B;
    cout << "Enter the value of C (0 or 1): " << endl;
    cin >> C;

    // Calculate the individual terms needed for the theorem
    char ab = And(A, B);            // AB term
    char a_not_c = And(Negate(A), C); // A'C term (A' means NOT A)
    char bc = And(B, C);             // BC term

    // Display intermediate results
    cout << "Value of AB -> " << ab << endl;
    cout << "Value of A'C -> " << a_not_c << endl;
    cout << "Value of BC -> " << bc << endl;

    // Evaluate left side of the theorem: AB + A'C + BC
    char left_side_part1 = Or(ab, a_not_c);  // First do AB OR A'C
    char left_side = Or(left_side_part1, bc); // Then OR with BC

    // Evaluate right side of the theorem: AB + A'C
    char right_side = Or(ab, a_not_c);       // Simply AB OR A'C

    // Display both sides of the equation
    cout << "Value of AB + A'C + BC -> " << left_side << endl;
    cout << "Value of AB + A'C -> " << right_side << endl;

    // Verify if the theorem holds for the given inputs
    if (left_side == right_side) {
        cout << "AB + A'C + BC = AB + A'C" << endl;
        cout << "Hence Proved! The consensus theorem holds for these inputs." << endl;
    } else {
        cout << "The theorem does not hold for these inputs (this should never happen!)" << endl;
    }

    return 0;
}