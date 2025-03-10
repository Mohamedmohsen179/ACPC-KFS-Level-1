#include <bits/stdc++.h>
using namespace std;
/*
  - for 
  - while 
  - do while 
  - break , Continue
  - nested loop
*/
int main() {

    // 1. For Loop
    cout << "1. For Loop Example:" << endl;
    for (int i = 0; i < 10; i++) {
      cout << i << " "; 
    }
    cout << endl << endl;

   // 2. While Loop
    cout << "2. While Loop Example:" << endl;
    
    int j = 0 ;// 0 1 2 3 4 
    while (j < 5) {
        cout << j << " "; 
        j++;
    }
    cout << endl << endl;

    // 3. Do-While Loop
    cout << "3. Do-While Loop Example:" << endl;
    int k = 10;
    do {
        cout << k << " "; // Output:10 
        k++;
    } while (k < 5);
    cout << endl << endl;

    // 4. Nested Loops
    cout << "4. Nested Loops Example:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << " " << j << endl;
        }
        cout << "====\n";
    }
    cout << endl;
  
    // 5. Reverse Numbers (For Loop)
    cout << "5. Reverse Numbers (For Loop):" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << " "; // Output: 10 9 8 7 6 5 4 3 2 1
    }
    cout << endl << endl;

    // 6. Sum of First 10 Natural Numbers (While Loop)
    cout << "6. Sum of First 10 Natural Numbers (While Loop):" << endl;
    int sum = 0, i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    cout << "Sum: " << sum << endl << endl; // Output: Sum: 55

    // 7. Positive Number Input (Do-While Loop)
    cout << "7. Positive Number Input (Do-While Loop):" << endl;
    int num;
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while (num <= 0);
    cout << "You entered: " << num << endl << endl;

    // 8. Multiplication Table (Nested Loops)
    cout << "8. Multiplication Table (Nested Loops):" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t"; // Output: Multiplication table from 1 to 10
        }
        cout << endl;
    }

    return 0;
}