//
// Created by varev on 6/7/24.
//

#ifndef LS_CLONE_COMMAND_H
#define LS_CLONE_COMMAND_H

#include <stdbool.h>

typedef enum {
    COLUMNAR,
    DETAILED
} display_mode;

typedef enum {
    DEFAULT,
    ALMOST_ALL,
    ALL
} search_type;

typedef struct {
    char* path;
    display_mode display;
    search_type search;
    bool human_readable;
    bool recursive;
} command;

#endif //LS_CLONE_COMMAND_H
