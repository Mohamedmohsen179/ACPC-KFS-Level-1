#include <bits/stdc++.h>
using namespace std;
// notion link: https://acpc-kfs.notion.site/Session-5-1a686f7595fb803aa35dc6eeacc2dde5?pvs=4
// Function to display a message (with default value)
void displayMessage(string msg = "Hello, World!", int times = 1) {
    cout << msg;
}

// Function to print an array
void coutArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// Function to check if a number is even
bool isEven(int num) {
    return (num % 2 == 0);
}

// Function to get the maximum of two numbers
int getMax(int a, int b) {
    return (a > b) ? a : b; 
}

// Function to reverse a string
string reverseString(string str) { 
    reverse(str.begin(), str.end());
    return str;
}

// Function to get the average of an array
double getAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double ans = (double)sum / size; 
    return ans; 
}

// Function to add two numbers
int add(int a, int b) {
  return  a + b;
}

int main() {

    // Without DRY (Bad Example)
    int a = 2, b = 3;
    int sum1 = a + b;
    cout << "Sum1: " << sum1 << endl;

    int x = 5, y = 7;
    int sum2 = x + y;
    cout << "Sum2: " << sum2 << endl;

    int m = 10, n = 15;
    int sum3 = m + n;
    cout << "Sum3: " << sum3 << endl;

    cout << "---------------------------" << endl;

    // With DRY (Using add function)
    cout << "Sum1: " << add(2, 3) << endl;
    cout << "Sum2: " << add(5, 7) << endl;
    cout << "Sum3: " << add(10, 15) << endl;

    cout << "---------------------------" << endl;

    // Using displayMessage function
    displayMessage(); // Default message
    cout << endl;
    displayMessage("Welcome to the session!");
    cout << endl;

    cout << "---------------------------" << endl;

    // Using printArray function
    int size = 5;
    int numbers[size] = {1, 2, 3, 4, 5};
    coutArray(numbers, size);
    cout << endl;

    cout << "---------------------------" << endl;
  
    cout << "---------------------------" << endl;

    // Using getAverage function
    int data[] = {10, 20, 30, 44, 50};
    cout << "Average is: " << getAverage(data, size) << endl;

    return 0;
}
