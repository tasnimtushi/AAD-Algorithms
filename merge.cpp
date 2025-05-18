#include<bits/stdc++.h>
using namespace std;

int n;

void margeprint(int ar[]) {
    cout << "After sorting = ";
    for(int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void conquer(int ar[], int first, int mid, int last) {
    int* merged = new int[last - first + 1]; // new array creation
    int i1 = first;
    int i2 = mid + 1;
    int x = 0;
    // Merging the two subarrays
    while(i1 <= mid && i2 <= last) {
        if(ar[i1] <= ar[i2]) {
            merged[x++] = ar[i1++];
        } else {
            merged[x++] = ar[i2++];
        }
    }
    // If elements are left in the left subarray
    while(i1 <= mid) {
        merged[x++] = ar[i1++];
    }
    // If elements are left in the right subarray
    while(i2 <= last) {
        merged[x++] = ar[i2++];
    }
    // Copying the merged array back to the original array
    for(int i = 0, j = first; i < (last - first + 1); i++, j++) {
        ar[j] = merged[i];
    }

   // delete[] merged; // Freeing up the allocated memory
}

void divide(int ar[], int first, int last) {
    if(first < last) {
        int mid = (first+last)/2;  //first + (last - first) / 2;/ // Finding the middle point
        divide(ar, first, mid); // Recursively sorting the first half
        divide(ar, mid + 1, last); // Recursively sorting the second half
        conquer(ar, first, mid, last); // Merging the two halves

    }
}

int main() {
    cout << "Enter the number of array elements = ";
    cin >> n;
    int ar[n];

    cout << "Enter the array elements = ";
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    divide(ar, 0, n - 1);
    margeprint(ar);

    return 0;
}

