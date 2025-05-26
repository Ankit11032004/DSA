#include <iostream>
using namespace std;

/*
// Function to print a name (commented out)
void printName(string name){
    cout << "hey" << name;
}

int main() {
    // Grade calculation based on marks
    int marks;
    cin >> marks;
    if (marks < 25) {
        cout << "F";
    } else if (marks >= 25 && marks <= 44) {
        cout << "E";
    } else if (marks >= 45 && marks <= 49) {
        cout << "D";
    } else if (marks >= 50 && marks <= 59) {
        cout << "E"; // Typo here, should likely be 'C' or another grade
    } else if (marks >= 60 && marks <= 69) {
        cout << "D"; // Could be 'B'
    } else if (marks >= 70 && marks <= 79) {
        cout << "C"; // Could be 'A'
    } else if (marks > 80 && marks < 89) {
        cout << "B";
    } else if (marks >= 90 && marks <= 100) {
        cout << "A";
    }

    // Job eligibility based on age
    int age;
    cin >> age;
    if (age < 18) {
        cout << "not eligible for job";
    } else if (age <= 54) {
        cout << "eligible for job";
    } else if (age <= 57) {
        cout << "eligible for job ";
    }
    if (age >= 55) {
        cout << "but retirement soon";
    } else {
        cout << "retirement time"; // This else will never be reached if the previous if conditions are met
    }

    // Day of the week using switch statement
    int day;
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day"; // Added a message for invalid input
    }
    cout << endl; // Added a newline for better output formatting

    // Array of doubles (potential out-of-bounds access)
    double arr_double[5];
    cin >> arr_double[0] >> arr_double[1] >> arr_double[2] >> arr_double[3] >> arr_double[4]; // Only reading 5 elements
    // cin >> arr_double[5]; // This would be out of bounds!
    arr_double[3] = 15.5;
    cout << arr_double[3] << endl;

    // 2D array (accessing out of bounds)
    int arr_2d[3][5];
    arr_2d[1][3] = 78;
    cout << arr_2d[1][4] << endl; // Accessing the 5th element (index 4) of the 2nd row

    // String manipulation
    string s = "striver";
    int len = s.size();
    s[len - 1] = 'z'; // Changing the last character to 'z'
    cout << s[len - 2] << endl; // Printing the second to last character
    // cout << s[6] << endl; // This would access the 7th character (index 6), which is valid

    // For loop example
    int i;
    for (i = 5; i > 0; i = i - 1) {
        cout << "Ankit" << i << endl;
    }
    cout << i << endl; // The value of i will be 0 after the loop

    // Function call (commented out)
    // string name;
    // cin >> name;
    // printName(name);
    // return 0; // This return statement was inside the commented-out block

    return 0; // Moved the return 0; to the correct location
}

// Function to calculate and print the sum of two numbers (commented out)
// void sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     cout << num3;
// }
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     sum(num1, num2);
//     // int res=sum(num1,num2); // The sum function is void, so it doesn't return a value
//     // cout<<res;
//     return 0;
// }

// Function to find the maximum of two numbers (commented out)
// int maxx(int num1, int num2) {
//     if (num1 >= num2) {
//         return num1;
//     } else {
//         return num2;
//     }
// }
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }

// Pass by value example (commented out)
// void doSomething(int num) {
//     cout << num << endl; // 10
//     num += 5;
//     cout << num << endl; // 15
//     num += 5;
//     cout << num << endl; // 20
// }
// int main() {
//     int num = 10;
//     doSomething(num);
//     return 0;
// }

// Another pass by value example (commented out)
// void dosomething(int num) {
//     cout << num << endl; // 10
//     num += 5;
//     cout << num << endl; // 15
//     num += 10;
//     cout << num << endl; // 25
//     cout << num << endl; // 25
//     cout << num << endl; // 25
//     num -= 5;
//     cout << num << endl; // 20
// }
// int main() {
//     int num = 10;
//     dosomething(num);
//     cout << num << endl; // 10 (original value in main remains unchanged)
// }

// Pass by value with string (commented out)
// void dosomething(string s) {
//     cout << s << endl; // raj
//     s[0] = 't';
//     cout << s << endl; // taj (only changed within the function)
// }
// int main() {
//     string s = "raj";
//     dosomething(s);
//     cout << s << endl; // raj (original string in main remains unchanged)
// }

// Call by reference with string (commented out)
// void dosomething(string &s) {
//     s[0] = 't';
//     cout << s << endl; // taj (modification affects the original string)
// }
// int main() {
//     string s = "raj";
//     dosomething(s);
//     cout << s << endl; // taj (original string in main is now changed)
// }
//In pass by value we pass the copy of value but in pass by reference we pass the original value.In pass by reference we use & and symbol.
 

// Passing array to a function (commented out - incomplete function)
// void dosomething(int arr[]) {
// }
// int main() {
//     int num[5];
//     for (int i = 0; i <= 4; i = i + 1) {
//         cin >> num[i];
//     }
//     for (int i = 0; i <= 4; i = i + 1) {
//         cout << num[i] << endl;
//     }
//     return 0;
// }*/

// Passing array to a function (demonstrating pass by reference for arrays)
void dosomething(int arr[], int n) {
    arr[0] += 100;
    cout << "value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) { // Corrected loop condition to avoid out-of-bounds write
        cin >> arr[i];
    }
    dosomething(arr, n);
    cout << "value of the int main: " << arr[0] << endl;
    return 0;
}
//Arrays always goes with refernce
