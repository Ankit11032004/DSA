#include<iostream>
#include<vector>
using namespace std;

int bruteforce(const vector<int>& arr, int k) {
    int maxSum = 0;
    int n = arr.size();
    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j < i + k; j++) {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the subarray size k: ";
    cin >> k;

    if(k > n || k <= 0) {
        cout << "Invalid Subarray Size." << endl;
    } else {
        cout << "Maximum sum of subarray of size " << k
             << " is: " << bruteforce(arr, k) << endl;
    }

    return 0;
}
