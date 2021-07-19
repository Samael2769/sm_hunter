/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_createwindow
*/

#include "../../includes/csfml.h"

sfRenderWindow *create_window(sfVideoMode mode, int limit,
char const *title, sfUint32 style)
{
    sfRenderWindow *window = sfRenderWindow_create(mode, title, style, NULL);
    sfImage *image = sfImage_createFromFile("./assets/sprite/logo.png");
    const sfUint8 *ptr = sfImage_getPixelsPtr(image);

    sfRenderWindow_setIcon(window, 801, 415, ptr);
    sfRenderWindow_setFramerateLimit(window, limit);
    return (window);
}