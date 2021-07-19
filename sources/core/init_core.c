/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_core
*/

#include "struct.h"
#include "sm_libsfml.h"

static status_t make_status(void)
{
    status_t status;

    status.music = true;
    status.sfx = true;
    status.volume = 50;
    return (status);
}

static void init_map_limit(core_t *core)
{
    sfRectangleShape_setSize(core->hitbox.hitbox, (sfVector2f){40, 40});
    sfRectangleShape_setOutlineColor(core->hitbox.hitbox, sfBlue);
    core->hitbox.mapl = sfRectangleShape_copy(core->hitbox.hitbox);
    sfRectangleShape_setSize(core->hitbox.mapl, (sfVector2f){1150, 650});
    sfRectangleShape_setPosition(core->hitbox.mapl, (sfVector2f){400, 200});
    core->clock = sfClock_create();
    core->last_time = sfTime_Zero;
}

int init_core(core_t *core)
{
    char ***parsed = sm_parser("config/init_core.conf");

    core->font = sfFont_createFromFile(parsed[0][1]);
    core->window = create_window((sfVideoMode) {sm_atoi(parsed[1][1]),
    sm_atoi(parsed[1][2]), sm_atoi(parsed[1][3])}, sm_atoi(parsed[2][1]),
    parsed[3][1], sfFullscreen);
    core->id_scene = parsed[4][1];
    core->status = make_status();
    core->deathsfx = make_sound_effect("assets/musics/death.ogg");
    core->buttonsfx = make_sound_effect("assets/musics/sound.ogg");
    core->translation.stop = false;
    init_map_limit(core);
    return 0;
}