#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function for sorting an array
void selectionSort(int arr[], int n){
    int min;
    for (int i = 0; i < n - 1; i++){
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

// Function for entering an array
void inputarr(int arr[], int n){
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
}

// Function for printing an array
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n; cin >> n;
    int arr[n];
    inputarr(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
