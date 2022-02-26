#pragma warning(disable:4996)

#include <cstdio>
#include <thread>
#include <chrono>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    using namespace std::chrono_literals;

    std::setbuf(stdout, nullptr); // unbuffered stdout
    std::putchar('a'); // appears immediately on unbuffered stream
    std::this_thread::sleep_for(1s);
    std::putchar('b');

    _getch();
    return 0;
}