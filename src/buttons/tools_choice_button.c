/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** choice_pen.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_spawn_l1(S *s, sfEvent event, N *n)
{
    sfBool spawn2 = sfFalse;
    sfVector2i mou_spawn2 = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect_spawn2 = sfRectangleShape_getGlobalBounds(s->sha.r_pen);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect_spawn2, mou_spawn2.x, mou_spawn2.y)) {
            spawn2 = sfTrue;
        }
        if (spawn2) {
            sfRectangleShape_setSize(n->r.r_line_1, (sfVector2f){100, 100});
        } else {
            sfRectangleShape_setSize(n->r.r_line_1, (sfVector2f){0, 0});
        }
    }
}

void button_spawn_c1(S *s, sfEvent event, N *n)
{
    sfBool spawn2 = sfFalse;
    sfVector2i mou_spawn2 = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect_spawn2 = sfRectangleShape_getGlobalBounds(s->sha.r_pen);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect_spawn2, mou_spawn2.x, mou_spawn2.y)) {
            spawn2 = sfTrue;
        }
        if (spawn2) {
            sfRectangleShape_setSize(n->r.r_circle_1, (sfVector2f){100, 100});
        } else {
            sfRectangleShape_setSize(n->r.r_circle_1, (sfVector2f){0, 0});
        }
    }
}

void button_spawn_s1(S *s, sfEvent event, N *n)
{
    sfBool spawn2 = sfFalse;
    sfVector2i mou_spawn2 = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect_spawn2 = sfRectangleShape_getGlobalBounds(s->sha.r_pen);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect_spawn2, mou_spawn2.x, mou_spawn2.y)) {
            spawn2 = sfTrue;
        }
        if (spawn2) {
            sfRectangleShape_setSize(n->r.r_square_1, (sfVector2f){100, 100});
        } else {
            sfRectangleShape_setSize(n->r.r_square_1, (sfVector2f){0, 0});
        }
    }
}
