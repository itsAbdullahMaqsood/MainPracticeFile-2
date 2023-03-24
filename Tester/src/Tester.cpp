#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int i = 0;
    int n = 0;
    for (auto it = nums.begin(); it != nums.end(); it++) {

        for (auto in = it; in != nums.end(); in++ ) {
            if (*in == *it) { continue; }
            if (*it + *in == target) {
                    
                if (n <= 1) {
                    result.push_back(i);
                    n++;
                }
            }
        }
            i++;
    }
    cout << "[ ";
    for (auto numbers : result) {
        cout << numbers << " ";
    }
    cout << "]";
    return result;
}

int main()
{   
    vector<int> arr = { 5,10,15,20 };
    twoSum(arr, 25);
    

	return 0;
}
