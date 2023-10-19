#include "multi_before_and_after_negative.h"
int multi_before_and_after_negative(int arr[], int n) {
    int milty = 1;
    int first = index_first_negative(arr, n);
    int last = index_last_negative(arr, n);
    for (int i = 0; i < first; i++) {
        milty *= arr[i];
    }
    for (int i = last; i < n; i++) {
        milty *= arr[i];
    }
    return milty;
}