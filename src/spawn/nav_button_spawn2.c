/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** nav_button_spawn2.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_help_spawn1(N *n)
{
    sfRectangleShape_setSize(n->r_s.r_s_h_1, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r_s.r_s_h_1, (sfVector2f){620, 80});
}

void button_square_spawn1(N *n)
{
    sfRectangleShape_setSize(n->r.r_square_1, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r.r_square_1, (sfVector2f){150, 200});
}

void button_circle_spawn1(N *n)
{
    sfRectangleShape_setSize(n->r.r_circle_1, (sfVector2f){0, 0});
    sfShape_setPosition(n->r.r_circle_1, (sfVector2f){250, 200});
}

void button_line_spawn1(N *n)
{
    sfRectangleShape_setSize(n->r.r_line_1, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r.r_line_1, (sfVector2f){350, 200});
}
