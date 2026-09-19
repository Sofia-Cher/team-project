#include "khrapunov.h"

// Перевод десятичного числа в двоичное
// Пример: toBinary(5) == 101; toBinary(10) == 1010
long long toBinary(int n) {
    if (n == 0) return 0;
    long long result = 0;
    long long place = 1;
    while (n > 0) {
        int bit = n % 2;
        result += bit * place;
        place *= 10;
        n /= 2;
    }
    return result;
}

// Перевод двоичного числа в десятичное
// Пример: fromBinary(101) == 5; fromBinary(1010) == 10
int fromBinary(long long b) {
    int result = 0;
    int power = 1;
    while (b > 0) {
        int bit = b % 10;
        result += bit * power;
        power *= 2;
        b /= 10;
    }
    return result;
}

