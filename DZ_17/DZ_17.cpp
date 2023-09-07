#include <iostream>
using namespace std;

void average(int array[], int size)
{
    int s = 0, c = 0;
    for (int i = 0; i < size; i++) {
        s += array[i];
        c++;
    }
    cout << "Average = " << s / c << "\n\n";
}

void num(int arr[], int Size) {
    int c_p = 0;
    int c_n = 0;
    int z = 0;
    for (int j = 0; j < Size; j++) {
        if (arr[j] > 0)
            c_p++;
        else if (arr[j] < 0)
            c_n++;
        else if (arr[j] == 0)
            z++;
        else
            cout << "Wrong number!";
    }
    cout << "Positive = " << c_p << endl;
    cout << "Negative = " << c_n << endl;
    cout << "Zeros = " << z << "\n\n";
}

int main()
{    
    //2
    const int SIZE = 8;
    int ar[] = { 5, 1, 51, 21, 34, 12, 3, 85 };
    average(ar, SIZE);

    //3
    const int SIZE1 = 8;
    int ar1[] = { 5, -15, 51, 0, -2, 12, 0, -24 };
    num(ar1, SIZE1);
    return 0;
}
