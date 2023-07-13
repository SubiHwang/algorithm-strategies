#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &A) {
    for (int i = 0; i < A.size(); ++i) {
        int minIndex = i;
        for (int j = i + 1; j < A.size(); ++j)
            if (A[j] < A[minIndex])
                minIndex = j;
        swap(A[i], A[minIndex]);
    }
}