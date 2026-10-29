
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Заповнення масиву
void Create(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 10 + rand() % 91;
}

// Виведення масиву
void Print(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];

    cout << endl;
}

// Звичайна функція
int Min(const int a[], int n)
{
    int minValue = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] < minValue)
            minValue = a[i];

    return minValue;
}

// Шаблон функції
template <typename T>
T MinTemplate(const T a[], int n)
{
    T minValue = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] < minValue)
            minValue = a[i];

    return minValue;
}

#ifndef UNIT_TEST
int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    const int N = 10;
    int a[N];

    Create(a, N);

    cout << "Array:" << endl;
    Print(a, N);

    cout << "Min = " << Min(a, N) << endl;
    cout << "Min template = "
        << MinTemplate(a, N) << endl;

    return 0;
}
#endif
