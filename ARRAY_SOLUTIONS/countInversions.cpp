int mergeAndCount(int arr[], int temp[], int left, int right) {
    int mid, i, j, k;
    int inv_count = 0;
    
    if (left < right) {
        mid = (left + right) / 2;
        
        inv_count += mergeAndCount(arr, temp, left, mid); // Left half
        inv_count += mergeAndCount(arr, temp, mid + 1, right); // Right half
        
        inv_count += merge(arr, temp, left, mid, right); // Merge and count
    }
    
    return inv_count;
}

// Merge function that merges two halves and counts inversions
int merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left;    // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    int k = left;    // Starting index to be sorted
    int inv_count = 0;
    
    // Merge the two subarrays into temp[]
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // All remaining elements in the left subarray are greater than arr[j]
        }
    }
    
    // Copy the remaining elements of left subarray, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    
    // Copy the remaining elements of right subarray, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    
    // Copy the sorted subarray into original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
    
    return inv_count;
}

int countInversions(int arr[], int n) {
    int temp[n];
    return mergeAndCount(arr, temp, 0, n - 1);
}
