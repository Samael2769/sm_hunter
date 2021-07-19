/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "csfml.h"
#include <stdbool.h>

typedef struct scene_s {

} scene_t;

typedef struct game_object_s {

} game_object_t;

typedef struct status_s {
    bool click;
    bool music;
    bool sfx;
    float volume;
} status_t;

typedef struct sound_s {
    sfSound *sound;
    sfSoundBuffer *buffer;
} sound_t;

typedef struct translation_s {
    bool stop;
    sfInt64 last_time;
    int repitions;
    sfInt64 delay;
    sfVector2f movement;
} translation_t;

typedef struct hitbox_s
{
    sfRectangleShape *mapl;
    sfRectangleShape ***mapr;
    bool **mapb;
    sfRectangleShape *hitbox;
}hitbox_t;

typedef struct core_s {
    sfRenderWindow *window;
    sfClock *clock;
    scene_t *scene;
    sfFont *font;
    char *id_scene;
    sfTime last_time;
    sound_t *buttonsfx;
    sound_t *deathsfx;
    status_t status;
    translation_t translation;
    hitbox_t hitbox;
} core_t;

#endif /* !STRUCT_H_ */
