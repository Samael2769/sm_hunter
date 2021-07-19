/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/
#include "sm_hunter.h"
#include "sm_libc.h"

static char const help[] = {
    "Sm_Hunter: Game based on Duck Hunt\n"
};

int main(int ac, char **av)
{
    if (ac == 2 && sm_strcmp(av[1], "-h") == 0) {
        sm_putstr(help);
        return 0;
    } else if (ac != 1)
        return 84;
    sm_hunter();
    return 0;
}