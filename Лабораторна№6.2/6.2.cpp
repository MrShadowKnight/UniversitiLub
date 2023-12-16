#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int K(int mas[], const int n)
{
    int kilk = 0;
    for (int i = 0; i < n; i++)
    {
        if ((mas[i] % 2) != 0)
            kilk += 1;
    }
    return kilk;
}

void Create(int array[],const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        array[i] = Low + rand() % (High - Low + 1);

}
void Print(int array[], const int size)
{
    cout << "a[ ";
        for (int i = 0; i < size; ++i)
            cout << array[i] << " ";
    cout << "]" << endl;
}

int main() 
{

    srand((unsigned)time(NULL));
    int size = 0;
    int Low = -99;
    int High = 99;
    cout << "Size of array:";cin >> size;

    int* array;
    array = new int[size];

    Create(array, size, Low, High);
    Print(array, size);
    
    cout << "k = " << K(array, size) << endl;
    delete[] array;
}


