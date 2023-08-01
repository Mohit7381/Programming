#include <iostream>

template<typename T, size_t N>
class QuickSort {
public:
    void operator()(T (&arr)[N]) {
        quicksort(arr, 0, N - 1);
    }

private:
    int partition(T (&arr)[N], int low, int high) {
        T pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    void quicksort(T (&arr)[N], int low, int high) {
        if (low < high) {
            int pivot_index = partition(arr, low, high);

            quicksort(arr, low, pivot_index - 1);
            quicksort(arr, pivot_index + 1, high);
        }
    }
};

int main() {
    int arr[] = {9, 2, 5, 1, 7, 6, 8, 3, 4};
    constexpr size_t size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    QuickSort<int, size> sorter;
    sorter(arr);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}