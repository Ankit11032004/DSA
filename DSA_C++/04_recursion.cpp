#include <iostream>
using namespace std;


// Global counter used in the basic print example

int cnt = 0;

// 1. Print using a global counter (Print 0 to 2)

void printGlobalCounter() {
    if (cnt == 3)
        return;
    cout << cnt << endl;
    cnt++;
    printGlobalCounter();
}

// =======================================
// 2. Print from i to 1 (Top to Bottom)
// =======================================
void printDescending(int i) {
    if (i < 1)
        return;
    cout << i << endl;
    printDescending(i - 1);
}

// =======================================
// 3. Print from i to n (Bottom to Top)
// =======================================
void printAscending(int i, int n) {
    if (i > n)
        return;
    cout << i << endl;
    printAscending(i + 1, n);
}

// =======================================
// 4. Reverse order printing using post-recursion
// =======================================
void printDescendingPost(int i) {
    if (i < 1)
        return;
    printDescendingPost(i - 1);
    cout << i << endl;
}

// =======================================
// 5. Reverse order printing using post-recursion (Ascending version)
// =======================================
void printAscendingPost(int i, int n) {
    if (i > n)
        return;
    printAscendingPost(i + 1, n);
    cout << i << endl;
}

// =======================================
// 6. Sum of numbers using parameter
// =======================================
void sumUsingParameter(int i, int sum) {
    if (i < 1) {
        cout << "Sum is: " << sum << endl;
        return;
    }
    sumUsingParameter(i - 1, sum + i);
}

// =======================================
// 7. Sum of numbers using function return
// =======================================
int sumUsingFunction(int n) {
    if (n == 0)
        return 0;
    return n + sumUsingFunction(n - 1);
}

// =======================================
// 8. Factorial using recursion
// =======================================
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// =======================================
// 9. Reverse array using loop (two pointers)
// =======================================
void reverseArrayIterative(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// =======================================
// 10. Reverse array using recursion (start & end pointers)
// =======================================
void reverseArrayRecursive(int arr[], int start, int end) {
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    reverseArrayRecursive(arr, start + 1, end - 1);
}

// =======================================
// 11. Reverse array using index and size
// =======================================
void reverseArrayIndex(int arr[], int i, int n) {
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArrayIndex(arr, i + 1, n);
}

// =======================================
// 12. Check if array is a palindrome (template-based)
// =======================================
template<typename T>
bool palindrome(int i, T arr[], int n) {
    if (i >= n / 2)
        return true;
    if (arr[i] != arr[n - i - 1])
        return false;
    return palindrome(i + 1, arr, n);
}

// =======================================
// MAIN FUNCTION
// =======================================
int main() {
    int choice;
    cout << "Choose data type to check for palindrome:\n";
    cout << "1. Integer\n2. Character\n3. Float\nYour choice: ";
    cin >> choice;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // ===============================
    // Option 1: Integer array
    // ===============================
    if (choice == 1) {
        int arr[n];
        cout << "Enter " << n << " integers:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << (palindrome(0, arr, n) ? "✅ Palindrome\n" : "❌ Not a Palindrome\n");
    }

    // ===============================
    // Option 2: Character array
    // ===============================
    else if (choice == 2) {
        char arr[n];
        cout << "Enter " << n << " characters:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << (palindrome(0, arr, n) ? "✅ Palindrome\n" : "❌ Not a Palindrome\n");
    }

    // ===============================
    // Option 3: Float array
    // ===============================
    else if (choice == 3) {
        float arr[n];
        cout << "Enter " << n << " float values:\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << (palindrome(0, arr, n) ? "✅ Palindrome\n" : "❌ Not a Palindrome\n");
    }

    // ===============================
    // Invalid choice
    // ===============================
    else {
        cout << "❗ Invalid choice. Please restart and select 1, 2, or 3.\n";
    }

    return 0;
}
