#include <stdio.h>

int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        int probe = array[pos];

        printf("Comparing with array[%lu] = %d\n", pos, probe);

        if (probe == value) {
            return pos; // Element found
        }

        if (probe < value) {
            low = pos + 1; // Adjust the search range to the right
        } else {
            high = pos - 1; // Adjust the search range to the left
        }
    }

    return -1; // Value not found in the array
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search_value = 30;

    int result = interpolation_search(arr, size, search_value);

    if (result != -1) {
        printf("Value %d found at index %d\n", search_value, result);
    } else {
        printf("Value %d not found in the array\n", search_value);
    }

    return 0;

