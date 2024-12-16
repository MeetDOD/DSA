#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int end) {
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    vector<int> first(arr.begin() + start, arr.begin() + start + len1);
    vector<int> second(arr.begin() + mid + 1, arr.begin() + mid + 1 + len2);

    int index1 = 0;
    int index2 = 0;
    int arrayIndex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[arrayIndex++] = first[index1++];
        } else {
            arr[arrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[arrayIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[arrayIndex++] = second[index2++];
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if (start >= end) {
        return;
    }

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main() {
    vector<int> arr = {5, 3, 4, 2, 1};

    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}