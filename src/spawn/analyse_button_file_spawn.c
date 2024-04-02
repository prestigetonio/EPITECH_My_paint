/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** analyse_all.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_spawn_f1(S *s, sfEvent event, N *n)
{
    sfBool spawn = sfFalse;
    sfVector2i mou_spawn = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r.r_file);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_spawn.x, mou_spawn.y)) {
            spawn = sfTrue;
        }
        if (spawn) {
            sfRectangleShape_setSize(n->r_s.r_s_file_1, (sfVector2f){200, 60});
        } else {
            sfRectangleShape_setSize(n->r_s.r_s_file_1, (sfVector2f){0, 0});
        }
    }
}

void button_spawn_f2(S *s, sfEvent event, N *n)
{
    sfBool spawn = sfFalse;
    sfVector2i mou_spawn = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r.r_file);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_spawn.x, mou_spawn.y)) {
            spawn = sfTrue;
        }
        if (spawn) {
            sfRectangleShape_setSize(n->r_s.r_s_file_2, (sfVector2f){200, 60});
        } else {
            sfRectangleShape_setSize(n->r_s.r_s_file_2, (sfVector2f){0, 0});
        }
    }
}

void button_spawn_f3(S *s, sfEvent event, N *n)
{
    sfBool spawn = sfFalse;
    sfVector2i mou_spawn = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r.r_file);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_spawn.x, mou_spawn.y)) {
            spawn = sfTrue;
        }
        if (spawn) {
            sfRectangleShape_setSize(n->r_s.r_s_file_3, (sfVector2f){200, 60});
        } else {
            sfRectangleShape_setSize(n->r_s.r_s_file_3, (sfVector2f){0, 0});
        }
    }
}
