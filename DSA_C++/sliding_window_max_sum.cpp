#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int findMaxSumSubarray(const vector<int>& arr,int k){
    int maxvalue = INT_MIN;
    int currentrunningsum=0;
    for (int i = 0; i < arr.size();++i){
        currentrunningsum+=arr[i];
        if(i>=k-1){
            maxvalue=max(maxvalue,currentrunningsum);
            currentrunningsum -= arr[i - (k - 1)];
        }
    }
    return maxvalue;
}
int main(){
    vector<int> arr = {4, 2, 1, 7, 8, 1, 2, 8, 1, 0};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " is:" << findMaxSumSubarray(arr, k) << endl;
    return 0;
}