#include "index_first_negative.h"
int index_first_negative(int arr[], int n) {
    int ind = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            ind = i;
            break;
        }
    }
    return ind;
}