/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** analyse_button_help_spawn.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_spawn_h1(S *s, sfEvent event, N *n)
{
    sfBool spawn2 = sfFalse;
    sfVector2i mou_spawn2 = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r.r_help);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_spawn2.x, mou_spawn2.y)) {
            spawn2 = sfTrue;
        }
        if (spawn2) {
            sfRectangleShape_setSize(n->r_s.r_s_h_1, (sfVector2f){450, 300});
        } else {
            sfRectangleShape_setSize(n->r_s.r_s_h_1, (sfVector2f){0, 0});
        }
    }
}
