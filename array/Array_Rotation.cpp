#include <iostream>
using namespace std;

void Rotation(int arr[], int n, int size);

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int n;

    cout << "Enter how many times you want to rotate the array: ";
    cin >> n;

    Rotation(arr, n, 6);

    cout << "Your Rotated array is = ";
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void Rotation(int arr[], int n, int size)
{
    n = n % size;   

    int temp[6];


    for(int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    // shift remaining elements left
    for(int i = n; i < size; i++) {
        arr[i - n] = arr[i];
    }

}
