/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** init.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void init_button(S *s, N *n)
{
    button_pen(s);
    button_eraser(s);
    button_file(n);
    button_file_spawn1(n);
    button_file_spawn2(n);
    button_file_spawn3(n);
    button_edit(n);
    button_edit_spawn1(n);
    button_edit_spawn2(n);
    button_help(n);
    button_help_spawn1(n);
    button_square_spawn1(n);
    button_circle_spawn1(n);
    button_line_spawn1(n);
}

int analyse_event(S *s, sfEvent event, N *n, Detect *det)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(s->spr.window);
    detect_click(det, event);
    button_click_pen(s, event);
    button_click_edit_pen(s, n, event);
    button_click_eraser(s, event);
    button_click_edit_erase(s, n, event);
    button_save(s, n, event);
    button_spawn_f1(s, event, n);
    button_spawn_f2(s, event, n);
    button_spawn_f3(s, event, n);
    button_spawn_e1(s, event, n);
    button_spawn_e2(s, event, n);
    button_spawn_h1(s, event, n);
    button_spawn_s1(s, event, n);
    button_spawn_c1(s, event, n);
    button_spawn_l1(s, event, n);
    return 0;
}

void choice_analyse(S *s, sfRenderWindow *window, N *n, Detect *det)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        analyse_event(s, event, n, det);
    }
}

static void size_modif(S *s, sfVideoMode video_mode)
{
    sfVector2u texturesize = sfTexture_getSize(s->spr.texture);
    float scaleX = (float)video_mode.width / texturesize.x;
    float scaleY = (float)video_mode.height / texturesize.y;

    sfSprite_setScale(s->spr.sprite, (sfVector2f){scaleX, scaleY});
}

static void size_modif_back(S *s, sfVideoMode video_mode)
{
    sfVector2u texturesize = sfTexture_getSize(s->spr.texture2);
    float scaleX = (float)video_mode.width / texturesize.x;
    float scaleY = (float)video_mode.height / texturesize.y;

    sfSprite_setScale(s->spr.sprite2, (sfVector2f){scaleX, scaleY});
}

void init_my_paint(S *s, N *n, Pen *pen, sfVideoMode vid_m)
{
    pen->pixel = sfImage_createFromColor
    (vid_m.width, vid_m.height, sfTransparent);
    create_all(s, n, pen);
    s->spr.window = sfRenderWindow_create(vid_m, "MyPaint -\
    Tonio & Pagogo", sfResize | sfClose, NULL);
    text(s, n);
    text_two(s, n);
    size_modif(s, vid_m);
    size_modif_back(s, vid_m);
    init_button(s, n);
    pen->pen_texture = sfTexture_create(vid_m.width, vid_m.height);
    sfSprite_setTexture(pen->pen_sprite, pen->pen_texture, sfTrue);
    sfTexture_updateFromImage(pen->pen_texture, pen->pixel, 0, 0);
    sfImage_destroy(pen->pixel);
}
