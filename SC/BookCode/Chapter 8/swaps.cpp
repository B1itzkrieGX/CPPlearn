/**
 * @file  swaps.cpp
 * @brief 程序清单8.4 -- swapping with references and with pointers
 * @date 2024-04
 *
 */
#include <iostream>

using namespace std;
void swapr(int &a, int &b) // use references，&a = 参数，使用的引用
{
    int temp;

    temp = a; // use a, b for values of variables
    a = b;
    b = temp;
}

void swapp(int *p, int *q) // use pointers
{
    int temp;

    temp = *p; // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) // try using values
{
    int temp;

    temp = a; // use a, b for values of variables
    a = b;
    b = temp;
}

int main()
{
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using reference to swap contents:\n";
    swapr(wallet1, wallet2); // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass address of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2); // pass value of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    return 0;
}