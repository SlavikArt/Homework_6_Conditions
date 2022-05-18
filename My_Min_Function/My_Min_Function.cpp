#include <iostream>

using namespace std;

int findMaximum(int arr[]) {
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int findMinimum(int arr[]) {
    int min = findMaximum(arr);
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}


int main()
{
    setlocale(0, "rus");

    int arr[5];

    cout << "Введите 5 чисел: \n";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "\nНаименьшее число: " << findMinimum(arr) << "\n";
}