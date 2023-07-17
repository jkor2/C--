#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Float type (Decimals in integrers)
    float value = 77.1;

    // Fixed variable - Preventing scientific notation
    // Set Precsion - sets the number of significant numbers to be output
    cout << "Yo" << setprecision(20) << fixed << value << endl;

    // Puts out 15 significant digits
    double value2 = 77.1;
    cout << value2 << endl;
}
