#include <iostream>
#include <cassert>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"
#include "task9.h"
#include "task10.h"


using namespace std;
using namespace tasks;

int sum(int a, int b) { return a + b; }

void testSum() {
    assert(sum(1, 2) == 3);
    assert(sum(0, 0) == 0);
    assert(sum(-1, 2) == 1);
    assert(sum(1, -2) == -1);
    assert(sum(-1, -2) == -3);
    cout << "Sum test finished" << endl;
}

int main()
{
    test_task1_1();
    testSum();
    cout << "Hello World!\n";
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
}
