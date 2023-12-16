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

void Create(int array[], const int size, const int Low, const int High,const int i)
{
    array[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(array, size, Low, High, i + 1);

}
void Print(int array[], const int size,const int i)
{
    cout << setw(4) << array[i];
    if (i < size - 1)
        Print(array, size, i + 1);
    else
        cout << " ]" << endl;
}

int main()
{

    srand((unsigned)time(NULL));
    int size, Low, High;
    cout << "Size of array:"; cin >> size;
    cout << "Low = "; cin >> Low;
    cout << "High = "; cin >> High;
    int* array;
    array = new int[size];

    Create(array, size, Low, High,0);
    cout << "a[";
    Print(array, size,0);  

    cout << "k = " << K(array, size) << endl;
    delete[] array;
}


