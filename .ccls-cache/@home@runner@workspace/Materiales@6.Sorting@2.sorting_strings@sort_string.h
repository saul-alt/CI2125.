///
/// sort_string.h
///
/// Interfaz del módulo (componente o unidad del programa) de ordenamiento
///

#pragma once
#ifndef SORTING H
#define SORTING H

#include <string>
#include <vector>

void bubble_sort(std::vector<std::string>& data);
void insertion_sort(std::vector<std::string>& data);
void selection_sort(std::vector<std::string>& data);
void quick_sort(std::vector<std::string>& data, int low, int high);
void merge_sort(std::vector<std::string>& data, int low, int high);

#endif