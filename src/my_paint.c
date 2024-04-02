/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** my_paint.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

static void draw_all(S *s, N *n, Pen *pen)
{
    sfRenderWindow_clear(s->spr.window, sfWhite);
    sfRenderWindow_drawSprite(s->spr.window, s->spr.sprite2, NULL);
    sfRenderWindow_drawSprite(s->spr.window, s->spr.sprite, NULL);
    sfRenderWindow_drawSprite(s->spr.window, pen->pen_sprite, NULL);
    sfRenderWindow_drawSprite(s->spr.window, s->spr.sprite, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, s->sha.r_pen, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, s->sha.r_erase, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r.r_file, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r_s.r_s_file_1, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r_s.r_s_file_2, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r_s.r_s_file_3, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r.r_edit, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r_s.r_s_edit_1, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r_s.r_s_edit_2, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r.r_help, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r_s.r_s_h_1, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r.r_square_1, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r.r_circle_1, NULL);
    sfRenderWindow_drawRectangleShape(s->spr.window, n->r.r_line_1, NULL);
    sfRenderWindow_display(s->spr.window);
}

void text(S *s, N *n)
{
    s->spr.texture2 = sfTexture_createFromFile(BACK, NULL);
    s->spr.texture = sfTexture_createFromFile(BACKGROUND, NULL);
    s->spr.logo_pen = sfTexture_createFromFile(PEN, NULL);
    s->spr.logo_eraser = sfTexture_createFromFile(ERASE, NULL);
    n->l.l_file = sfTexture_createFromFile(L_FILE, NULL);
    n->l_s.l_s_file_1 = sfTexture_createFromFile(S_NEWFILE, NULL);
    n->l_s.l_s_file_2 = sfTexture_createFromFile(S_OPENFILE, NULL);
    n->l_s.l_s_file_3 = sfTexture_createFromFile(S_SAVEFILE, NULL);
    n->l.l_edit = sfTexture_createFromFile(L_EDIT, NULL);
    n->l_s.l_s_edit_1 = sfTexture_createFromFile(S_PEN, NULL);
    n->l_s.l_s_edit_2 = sfTexture_createFromFile(S_ERASE, NULL);
    n->l.l_help = sfTexture_createFromFile(L_HELP, NULL);
    n->l_s.l_s_help_1 = sfTexture_createFromFile(S_HELP, NULL);
    n->l.l_square = sfTexture_createFromFile(S_SQUARE, NULL);
    n->l.l_circle = sfTexture_createFromFile(S_CIRCLE, NULL);
    n->l.l_line = sfTexture_createFromFile(S_LINE, NULL);
    sfSprite_setTexture(s->spr.sprite, s->spr.texture, sfTrue);
    sfSprite_setTexture(s->spr.sprite2, s->spr.texture2, sfTrue);
}

void text_two(S *s, N *n)
{
    sfRectangleShape_setTexture(s->sha.r_pen, s->spr.logo_pen, sfFalse);
    sfRectangleShape_setTexture(s->sha.r_erase, s->spr.logo_eraser, sfFalse);
    sfRectangleShape_setTexture(n->r.r_file, n->l.l_file, sfFalse);
    sfRectangleShape_setTexture(n->r_s.r_s_file_1, n->l_s.l_s_file_1, sfFalse);
    sfRectangleShape_setTexture(n->r_s.r_s_file_2, n->l_s.l_s_file_2, sfFalse);
    sfRectangleShape_setTexture(n->r_s.r_s_file_3, n->l_s.l_s_file_3, sfFalse);
    sfRectangleShape_setTexture(n->r.r_edit, n->l.l_edit, sfFalse);
    sfRectangleShape_setTexture(n->r_s.r_s_edit_1, n->l_s.l_s_edit_1, sfFalse);
    sfRectangleShape_setTexture(n->r_s.r_s_edit_2, n->l_s.l_s_edit_2, sfFalse);
    sfRectangleShape_setTexture(n->r.r_help, n->l.l_help, sfFalse);
    sfRectangleShape_setTexture(n->r_s.r_s_h_1, n->l_s.l_s_help_1, sfFalse);
    sfRectangleShape_setTexture(n->r.r_square_1, n->l.l_square, sfFalse);
    sfRectangleShape_setTexture(n->r.r_circle_1, n->l.l_circle, sfFalse);
    sfRectangleShape_setTexture(n->r.r_line_1, n->l.l_line, sfFalse);
}

void create_all(S *s, N *n, Pen *pen)
{
    s->spr.sprite = sfSprite_create();
    s->spr.sprite2 = sfSprite_create();
    s->sha.r_erase = sfRectangleShape_create();
    s->sha.r_pen = sfRectangleShape_create();
    pen->pen_sprite = sfSprite_create();
    n->r.r_file = sfRectangleShape_create();
    n->r_s.r_s_file_1 = sfRectangleShape_create();
    n->r_s.r_s_file_2 = sfRectangleShape_create();
    n->r_s.r_s_file_3 = sfRectangleShape_create();
    n->r.r_edit = sfRectangleShape_create();
    n->r_s.r_s_edit_1 = sfRectangleShape_create();
    n->r_s.r_s_edit_2 = sfRectangleShape_create();
    n->r.r_help = sfRectangleShape_create();
    n->r_s.r_s_h_1 = sfRectangleShape_create();
    n->r.r_square_1 = sfRectangleShape_create();
    n->r.r_circle_1 = sfRectangleShape_create();
    n->r.r_line_1 = sfRectangleShape_create();
}

static void all_erase(S *s, Detect *det, sfImage *pixel, Pen *pen)
{
    if (det->mouse_check) {
        check_erase(s, pixel);
        sfTexture_updateFromImage(pen->pen_texture, pixel, 0, 0);
    }
}

static void all_pixel(S *s, Detect *det, sfImage *pixel, Pen *pen)
{
    if (det->mouse_check) {
        check_pixel(s, pixel);
        sfTexture_updateFromImage(pen->pen_texture, pixel, 0, 0);
    }
}

static void screen(S *s, Detect *det, sfImage *pixel, Pen *pen)
{
    sfImage *screen = sfTexture_copyToImage(s->spr.texture);

    sfImage_saveToFile(screen, "save.png");
}

int my_paint(S *s, N *n, Pen *pen, Detect *det)
{
    sfVideoMode vi_m = {1920, 1080, 32};
    sfImage *pixel = sfImage_createFromColor
    (vi_m.width, vi_m.height, sfTransparent);

    init_my_paint(s, n, pen, vi_m);
    while (sfRenderWindow_isOpen(s->spr.window)) {
        choice_analyse(s, s->spr.window, n, det);
        if (s->tool_selected == 0) {
            all_pixel(s, det, pixel, pen);
        }
        if (s->tool_selected == 1) {
            all_erase(s, det, pixel, pen);
        }
        if (s->tool_selected == 2) {
            screen(s, det, pixel, pen);
        }
        draw_all(s, n, pen);
    }
    destroy_all(s, n, pen);
    sfImage_destroy(pixel);
}
