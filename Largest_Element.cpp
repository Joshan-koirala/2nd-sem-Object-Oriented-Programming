//19). C++ Program to Find the Largest Element of an Array Using Function with Following Condition
//     i). Pointer as Formal Argument
//	 ii). Sized Array as Formal Argument
//	 iii). Unsized Array as Formal Argument


#include <iostream>
using namespace std;

// i) Pointer as Formal Argument
int findMaxPointer(int* arr, int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// ii) Sized Array as Formal Argument
int findMaxSized(int arr[8]) {
    int max = arr[0];
    for(int i = 1; i < 8; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// iii) Unsized Array as Formal Argument
int findMaxUnsized(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
 
int main() {
    int arr[8];
    cout << "Enter 8 elements of the array: "<<endl;
    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    cout << "\nLargest Element using Pointer: " << findMaxPointer(arr, 8) << endl;
    cout << "Largest Element using Sized Array: " << findMaxSized(arr) << endl;
    cout << "Largest Element using Unsized Array: " << findMaxUnsized(arr, 8) << endl;

    return 0;
}

