#include <iostream>
#include "cPlusPlusHeadFile/cPLusPlusHead.h"

int Multiply(int a, int b);

// void VariableDemo();

void Conditional(int cod);

int main() {
    int result = Multiply(3, 9);
    // VariableDemo();
    Conditional(1);
    using namespace std;
    cout << result << endl;
    logMessage();
    cin.get();
}
