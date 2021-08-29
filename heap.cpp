#include <vector>

void MAX_HEAPIFY(std::vector<int> &arr, int begin, int end) {
    int l       = begin * 2 + 1;
    int r       = begin * 2 + 2;
    int largest = begin;
    if(l <= end && arr[l] > arr[largest]) largest = l;
    if(r <= end && arr[r] > arr[largest]) largest = r;
    if(largest != begin) {
        std::swap(arr[begin], arr[largest]);
        MAX_HEAPIFY(arr, largest, end);
    }
}

void BUILD_HEAPIFY(std::vector<int> &arr) {
    for(int i = arr.size() / 2 - 1; i >= 0; --i) MAX_HEAPIFY(arr, i, arr.size() - 1);
}
