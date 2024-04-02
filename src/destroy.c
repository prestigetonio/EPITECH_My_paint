/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** destroy.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void destroy_shapes(S *s, N *n, Pen *pen)
{
    sfRectangleShape_destroy(s->sha.r_pen);
    sfRectangleShape_destroy(s->sha.r_erase);
    sfRectangleShape_destroy(n->r.r_file);
    sfRectangleShape_destroy(n->r_s.r_s_file_1);
    sfRectangleShape_destroy(n->r_s.r_s_file_2);
    sfRectangleShape_destroy(n->r_s.r_s_file_3);
    sfRectangleShape_destroy(n->r.r_edit);
    sfRectangleShape_destroy(n->r_s.r_s_edit_1);
    sfRectangleShape_destroy(n->r_s.r_s_edit_2);
    sfRectangleShape_destroy(n->r.r_help);
    sfRectangleShape_destroy(n->r_s.r_s_h_1);
    sfRectangleShape_destroy(n->r.r_square_1);
    sfRectangleShape_destroy(n->r.r_circle_1);
    sfRectangleShape_destroy(n->r.r_line_1);
}

void destroy_sprites(S *s, Pen *pen)
{
    sfSprite_destroy(s->spr.sprite);
    sfTexture_destroy(s->spr.texture);
    sfTexture_destroy(s->spr.logo_pen);
    sfTexture_destroy(s->spr.logo_eraser);
    sfRenderWindow_destroy(s->spr.window);
    sfSprite_destroy(pen->pen_sprite);
    sfTexture_destroy(pen->pen_texture);
}

void destroy_all(S *s, N *n, Pen *pen)
{
    destroy_shapes(s, n, pen);
    destroy_sprites(s, pen);
}
