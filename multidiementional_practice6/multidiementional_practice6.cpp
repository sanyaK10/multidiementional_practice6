#include <iostream>
using namespace std;
int main()
{
    //number1
    int matrix[4][3] = {
        {1, 2, 3},//0
        {4, 5, 6},// 1
        {7, 8, 9},//2
        {10, 11, 12}
    };
    int total = 0;
    int ser = 0;
    int min = matrix[0][0];
    int max = matrix[0][0];

    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 3;j++) {
            int current = matrix[i][j];
            total += matrix[i][j];
            ser = total / 12;
            if (current < min) {
                min = current;
            }
            if (current > max) {
                max = current;
            }
        }
    }
    cout << "Total : " << total << '\n';
    cout << "Serednie: " << ser << '\n';
    cout << "Min: " << min << '\n';
    cout << "Max: " << max << '\n';



    //number 2
    int a[3][4] = {
        {3, 5, 6, 7},
        {12, 1, 1, 1},
        {0, 7, 12, 1}
    };
    int totale = 0;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << "\t";
            sum += a[i][j];
            totale += a[i][j];
        }
        cout << "| " << sum << '\n';
    }
    cout << "-------------------------------------" << '\n';
    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += a[i][j];
        }
        cout << sum << "\t";
    }
    cout << "| " << totale << '\n';

    //number 3
    srand(time(NULL));

    int arr[5][10];
    int arr2[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = rand() % 51;
            cout << arr[i][j] << "\t";
        }
        cout << '\n';
    }

    cout << '\n';
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = arr[i][j * 2] + arr[i][j * 2 + 1];
            cout << arr2[i][j] << "\t";
        }
        cout << '\n'; 
    }
}