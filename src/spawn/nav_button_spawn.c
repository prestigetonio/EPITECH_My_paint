/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** nav_button_two.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_file_spawn1(N *n)
{
    sfRectangleShape_setSize(n->r_s.r_s_file_1, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r_s.r_s_file_1, (sfVector2f){180, 80});
}

void button_file_spawn2(N *n)
{
    sfRectangleShape_setSize(n->r_s.r_s_file_2, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r_s.r_s_file_2, (sfVector2f){180, 140});
}

void button_file_spawn3(N *n)
{
    sfRectangleShape_setSize(n->r_s.r_s_file_3, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r_s.r_s_file_3, (sfVector2f){180, 200});
}

void button_edit_spawn1(N *n)
{
    sfRectangleShape_setSize(n->r_s.r_s_edit_1, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r_s.r_s_edit_1, (sfVector2f){400, 80});
}

void button_edit_spawn2(N *n)
{
    sfRectangleShape_setSize(n->r_s.r_s_edit_2, (sfVector2f){0, 0});
    sfRectangleShape_setPosition(n->r_s.r_s_edit_2, (sfVector2f){400, 140});
}
