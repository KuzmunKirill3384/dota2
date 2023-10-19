#include "multi_between_negative.h"
int multi_between_negative(int arr[], int n) {
    int milty = 1;
    int first = index_first_negative(arr, n);
    int last = index_last_negative(arr, n);
    for (int i = first; i < last; i++) {
        milty *= arr[i];
    }
    return milty;
}