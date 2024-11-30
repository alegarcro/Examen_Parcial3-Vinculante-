#ifndef TAREA_H
#define TAREA_H

#include <vector>

struct tarea {
    char id;
    int duracion;
    std::vector<char> dependencias;
};

#endif // TAREA_H