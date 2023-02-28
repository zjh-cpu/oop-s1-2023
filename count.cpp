#include <iostream>

using namespace std;

int count(int array[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int arr3[] = {1, 3, 5, 7, 9};
    int arr4[] = {0, 0, 0, 0, 0};
    int arr5[] = {1, 1, 1, 1, 1};

    cout << count(arr1, 9) << endl; // expected output: 4
    cout << count(arr2, 5) << endl; // expected output: 5
    cout << count(arr3, 5) << endl; // expected output: 0
    cout << count(arr4, 5) << endl; // expected output: 5
    cout << count(arr5, 5) << endl; // expected output: 0

    return 0;
}
