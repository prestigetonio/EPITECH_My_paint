/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** nav_button.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_file(N *n)
{
    sfRectangleShape_setSize(n->r.r_file, (sfVector2f){200, 60});
    sfRectangleShape_setPosition(n->r.r_file, (sfVector2f){180, 20});
}

void button_edit(N *n)
{
    sfRectangleShape_setSize(n->r.r_edit, (sfVector2f){200, 60});
    sfRectangleShape_setPosition(n->r.r_edit, (sfVector2f){400, 20});
}

void button_help(N *n)
{
    sfRectangleShape_setSize(n->r.r_help, (sfVector2f){200, 60});
    sfRectangleShape_setPosition(n->r.r_help, (sfVector2f){620, 20});
}
