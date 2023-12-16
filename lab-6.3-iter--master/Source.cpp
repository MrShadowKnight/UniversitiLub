#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
template <typename A >
void Create(A* a, const A n, const A Low, const A High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}


void Create(int* a, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
} 

template <typename A >
void Print(A* a, const A n)
{
    cout << "a[ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

void Print(int* a, const int n)
{
    cout << "a[ ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

template <typename A >
const A& Sum(A* a, const A n)
{
    int S = 0;

    for (int i = 0; i < n; i++)
        S += a[i];
    return S;
}

int Sum(int* a, const int n)
{
    int S = 0;

    for (int i = 0; i < n; i++)
        if (a[i] > 0 || (a[i] < 0))
            S += a[i];
    return S;
}

int main()
{
    srand((unsigned)time(NULL));
    int n{}, Low, High;
    int* a = new int[n];

    cout << "n = ";	cin >> n;
    cout << "Low = "; cin >> Low;
    cout << "High = "; cin >> High;

    Create(a, n, Low, High);
    Print(a, n);

    cout << "S = " << Sum(a, n) << endl;
    return 0;
}



