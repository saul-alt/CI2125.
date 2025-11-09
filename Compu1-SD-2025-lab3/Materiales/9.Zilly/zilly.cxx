///
/// Zilly in C++
///
/// A partial emulation of Zilly in C++, with sample usage
///

#include <cstdio>

/// Emulator

typedef int Z;

/// Zilly primitive functions | Funciones primitivas de Zilly

// less than | menor que
Z lt(Z n, Z k) {
    // return k < n;
    return k < n ? 1 : 0; // just in case ..
}

// subtract | resta
Z sub(Z n, Z k) {
    return k - n;
}

/// Programmer defined functions | Funciones definidas por el programador

Z chs(Z n) {
    return sub(n, 0);
}

Z add(Z n, Z k) {
    return sub(chs(n), k);
}

/// Test cases | Casos de prueba

void test00() {
    fprintf(stdout, "lt(0, -1) ==> %d\n", lt(0, -1));
    fprintf(stdout, "lt(0,  0) ==> %d\n", lt(0,  0));
    fprintf(stdout, "lt(0,  1) ==> %d\n", lt(0,  1));
}

void test01() {
    fprintf(stdout, "sub( 0, 67) ==> %d\n", sub( 0, 67));
    fprintf(stdout, "sub(67,  0) ==> %d\n", sub(67,  0));
    fprintf(stdout, "sub(42, 67) ==> %d\n", sub(42, 67));
    fprintf(stdout, "sub(67, 42) ==> %d\n", sub(67, 42));
    fprintf(stdout, "sub(42,  0) ==> %d\n", sub(42,  0));
    fprintf(stdout, "sub(42,  0) ==> %d\n", sub(42,  0));
}

void test02() {
    Z r1 = 42 - (67 - 25);
    Z r2 = sub(sub(25, 67), 42); // traducción de la anterior, usando sólo las primitivas de Zilly

    fprintf(stdout, "C++ : %d | Zilly: %d\n", r1, r2);
}

void test03() {
    Z r1 = 1024 - 512 - (67 - (42 - 512));
    Z r2 = 0; // <== Ejercicio: deben traducir la expresión anterior usando sólo las primitivas de Zilly

    fprintf(stdout, "C++ : %d | Zilly: %d\n", r1, r2);
}

void test04() {
    // Ejercicio: defina más casos de prueba .. por ejemplo, para funciones definidas por el programador
}

int main() {
    test00();
    test01();
    test02();
    test03();
    return 0;
}
