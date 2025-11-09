///
/// sort_string.cxx
///

#include "sort_string.h"
#include <cstdio>
#include <cstdlib>

using std::string;
using std::vector;

int min(int lb, int ub, const vector<string>& data) {
    // @@@ TAREA: completa

    // Verificar que el indice sea valido

    if (lb < 0 || lb >= data.size() || lb >= ub) {
    return -1; // @@@ eliminen esta última línea: lo puse sólo para que compile
}

    // Inicializar el indice del elemento minimo
    int min_index = lb;
    
    // Encontrar el elemento minimo en el rango [(lb .. ub)]
    for (int i = lb + 1; i < ub; ++i) {
        if (data[i] < data[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

int min(const vector<string>& data) {
    const int n = data.size();

    // caso especial: vector vacio
    if (n == 0) {
        return -1;
    }
    
    int index = min(0, n, data);
    if (index < 0) {
        exit(EXIT_FAILURE);
    }
    return index;
}

void selection_sort(vector<string>& data) {
    // @@@ TAREA: completar
    const int n = data.size();

    // No hace falta ordenar si tiene de 0 a 1 elemento
    if (n <= 1) {
        return;
    }

    // Selection sort
    for (int i = 0; i < n - 1; ++i) {

        // Encontrar el minimo en el subarray no ordenado [i, n-1]
        int j = min(i, n, data);

        // Intercambiar el primer minimo encontrado con el primer elemento del subarray no ordenado
        if (i != j) {
            std::swap(data[i], data[j]);
        }
    }
}
