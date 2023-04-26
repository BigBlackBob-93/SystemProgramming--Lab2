#include "sortings.h"
#include <random>

int main() {
    std::random_device rd;   // non-deterministic generator
    std::mt19937 gen(rd());  // to seed mersenne twister.
    std::uniform_int_distribution<> dist(-100,100); // distribute results between -100 and 100 inclusive.

    const int N = 5;
    int mass[N];
    for (int & mas : mass) mas = dist(gen);

    bubble_sort(mass, N);

    return 0;
}
