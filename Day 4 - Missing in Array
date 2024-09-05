#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b, int gcdValue)
{
    return (a * b) / gcdValue;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        // Read the values of a and b
        cin >> a >> b;

        // Calculate GCD
        int gcdValue = gcd(a, b);

        // Calculate LCM
        int lcmValue = lcm(a, b, gcdValue);

        // Print the results
        cout << gcdValue << " " << lcmValue << endl;
    }
    return 0;
}
