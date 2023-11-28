#include <iostream>
#include "cPlusPlusHeadFile/cPLusPlusHead.h"

int Multiply(int a, int b);

// void VariableDemo();

void Conditional(int cod);

void Loop();

int ControlLog();

int main() {
    int result = Multiply(3, 9);
    // VariableDemo();
    // Conditional(1);
    int controlResult = ControlLog();
     using namespace std;
    // cout << result << endl;
    cout << controlResult << endl;
    // logMessage();
    // Loop();
    cin.get();
}
