/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** choice_tools.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void check_pixel_two(sfImage *pixel, int x, int y)
{
    sfVideoMode vi_m = {1920, 1080, 32};
    sfColor color = sfColor_fromRGB(0, 0, 0);

    if (x >= 0 && x < vi_m.width && y >= 0 && y < vi_m.height) {
        sfImage_setPixel(pixel, x, y, color);
    }
}

void check_pixel(S *s, sfImage *pixel)
{
    sfVector2i mousepos = sfMouse_getPositionRenderWindow(s->spr.window);
    int x;
    int y;

    for (int dx = -5; dx <= 15; dx++) {
        for (int dy = -5; dy <= 15; dy++) {
            x = mousepos.x + dx;
            y = mousepos.y + dy;
            check_pixel_two(pixel, x, y);
        }
    }
}

void check_erase_two(sfImage *pixel, int x, int y)
{
    sfVideoMode vi_m = {1920, 1080, 32};
    sfColor color = sfColor_fromRGBA(0, 0, 0, 0);

    if (x >= 0 && x < vi_m.width && y >= 0 && y < vi_m.height) {
        sfImage_setPixel(pixel, x, y, color);
    }
}

void check_erase(S *s, sfImage *pixel)
{
    sfVector2i mousepos = sfMouse_getPositionRenderWindow(s->spr.window);
    int x;
    int y;

    for (int dx = -5; dx <= 15; dx++) {
        for (int dy = -5; dy <= 15; dy++) {
            x = mousepos.x + dx;
            y = mousepos.y + dy;
            check_erase_two(pixel, x, y);
        }
    }
}
