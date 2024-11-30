#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "tarea.h"
#include <vector>
#include <unordered_map>

bool sePuedeCompletarEnTiempo(const std::vector<tarea>& tareas, int numPersonas, int tiempoMaximo);
void inicializarMapas(const std::vector<tarea>& tareas, std::unordered_map<char, int>& gradoEntrada, std::unordered_map<char, std::vector<char>>& listaAdyacencia, std::unordered_map<char, int>& duracionTarea);
void calcularAsignaciones(const std::vector<tarea>& tareas, int numPersonas, std::unordered_map<char, int>& asignacionTarea, std::unordered_map<char, int>& inicioTarea);
void imprimirResultados(const std::vector<tarea>& tareas, int numPersonas, const std::unordered_map<char, int>& asignacionTarea, const std::unordered_map<char, int>& inicioTarea, int horaInicio, int minutoInicio);

#endif // FUNCIONES_H