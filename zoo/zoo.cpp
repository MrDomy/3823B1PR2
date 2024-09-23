
#include "header.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Cow cow1("burenka");
    cow1.printing();
    return 0;
}

