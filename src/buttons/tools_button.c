/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** button_tools.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_pen(S *s)
{
    sfRectangleShape_setSize(s->sha.r_pen, (sfVector2f){100, 100});
    sfRectangleShape_setPosition(s->sha.r_pen, (sfVector2f){40, 200});
}

void button_eraser(S *s)
{
    sfRectangleShape_setSize(s->sha.r_erase, (sfVector2f){100, 100});
    sfRectangleShape_setPosition(s->sha.r_erase, (sfVector2f){40, 350});
}
