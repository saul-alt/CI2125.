///
/// sort_double.cxx
///

#include "sort_double.h"

#include <cstdio>
#include <cstdlib>

using std::vector;

// Copiar el código de sort_int y modificarlo ayuda .. pero ..
// no olviden que ahora estan trabajando con 'double' en vez de 'int'
// Sin embargo, noten que los índices de los vectores son de tipo int .. duh!
// Presten atención para diferenciar si estan trabajando con datos o indices!

int min(int lb, int ub, const vector<double>& data) {
    // @@@ TAREA: completar

    // Verificar que el indice sea valido
    if (lb < 0 || lb >= data.size() || lb >= ub) {
    return -1; // @@@ eliminen esta última línea: lo puse sólo para que compile
}

    // Encontrar el elemento minimo en el rango [(lb .. ub)]
    for (int i = lb + 1; i < ub; ++i) {
        if (data[i] < data[lb]) {
            lb = i;  
        }
    }
    return lb;
}

int min(const vector<double>& data) {
    const int n = data.size();
    int index = min(0, n, data);
    if (index < 0) {
        exit(EXIT_FAILURE);
    }
    return index;
}

void selection_sort(vector<double>& data) {
    // @@@ TAREA: completar

    const int n = data.size();

    // Recorre todo el vector
    for (int i = 0; i < n - 1; i++) {
        // encontrar el elemento minimo en el rango [i .. n]
        int j = min(i, n, data);

        // Intercambiar el elemento minimo con la poscion actual i
        if (data[j] != i) {
            double temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
}
void  sort_double(vector<double>& data) {
    selection_sort(data);
}