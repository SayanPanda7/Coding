#include<iostream>
using namespace std;

class fib {
    int n, a, b, c, i, j;
    int d[50], count;  // Array to store Fibonacci numbers and a count of how many were stored

public:
    void input() {
        cout << "Enter the number of terms: ";
        cin >> n;  // Input the number of terms to generate
    }

    void calculate() {
        a = 0;
        b = 1;
        count = 0;

        // Print the first two Fibonacci numbers
        cout << a << "\t" << b << "\t";

        // Generate Fibonacci sequence and store intermediate results in the array d[]
        for (i = 2; i < n; i++) {
            c = a + b;
            cout << c << "\t";  // Print the next Fibonacci number

            // Store Fibonacci numbers starting from b + 1 to c-1 in array d[]
            for (j = b + 1; j < c; j++) {
                d[count] = j;  // Store the number in the array
                count++;
            }

            // Update a and b for the next Fibonacci number
            a = b;
            b = c;
        }

        // Print the stored values in the array d[]
        cout << "\nThe stored Fibonacci numbers are: ";
        for (int t = 0; t < count; t++) {
            cout << d[t] << "\t";
        }
        cout << endl;
    }
};

int main() {
    fib F1;  // Create an object of class fib
    F1.input();  // Input the number of terms
    F1.calculate();  // Calculate and display the Fibonacci sequence and stored values

    return 0;
}
