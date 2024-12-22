#include <vector>
using namespace std;

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
    vector<int> ans;
    
    int i = 0, j = 0, k = 0;
    int l1 = arr1.size(), l2 = arr2.size(), l3 = arr3.size();

    while (i < l1 && j < l2 && k < l3) {
        // Check if all three are equal
        if (arr1[i] == arr2[j] && arr1[i] == arr3[k]) {
            // Avoid duplicates in the result
            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
            k++;
        }
        // Move the pointer for the smallest element
        else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
    
    // Handle the case where no common elements are found
    if (ans.empty()) {
        return {-1};
    }

    return ans;
}
