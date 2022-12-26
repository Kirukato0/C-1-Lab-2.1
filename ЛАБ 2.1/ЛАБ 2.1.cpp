// ЛАБ 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    time_t k;
    srand(time(&k));
    const int N = 10;
    int i;
    int arr[N];
    for (i = 0; i < N; i++)
    { 
        arr[i] = rand() % 21 - 10;
        cout << "a[" << i  << "] = " <<arr[i]<< "\n";
    }
    double max = arr[0];
    int maxi = 0;
    for (auto i = 1; i < N; i++)
        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }

    cout << "\nMax element = " << max << endl;
    cout << "Max element position = " << maxi << endl << endl;

    double posSum = 0;
    for (auto i = maxi; i < N; i++)
        if (arr[i] > 0)
            posSum += arr[i];

    posSum -= max;

    double negSum = 0;
    for (auto k = 0; k < maxi; k++)
        if (arr[k] < 0)
            negSum += arr[k];
    

    cout << "Sum of positive element after max = " << posSum << endl;
    cout << "Sum of negative element before max = " << negSum << endl;
    return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
