/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** analyse_button_click.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_click_pen(S *s, sfEvent event)
{
    sfBool click = sfFalse;
    sfVector2i mou_pos = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(s->sha.r_pen);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_pos.x, mou_pos.y)) {
            click = sfTrue;
        }
        if (click) {
            sfRectangleShape_setFillColor(s->sha.r_pen,
            sfColor_fromRGB(220, 220, 220));
        } else {
            sfRectangleShape_setFillColor(s->sha.r_pen, sfWhite);
        }
        if (click) {
            s->tool_selected = 0;
        }
    }
}

void button_click_edit_pen(S *s, N *n, sfEvent event)
{
    sfBool click = sfFalse;
    sfVector2i mou_pos = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r_s.r_s_edit_1);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_pos.x, mou_pos.y)) {
            click = sfTrue;
        }
        if (click) {
            s->tool_selected = 0;
        }
    }
}

void button_click_eraser(S *s, sfEvent event)
{
    sfBool click_two = sfFalse;
    sfVector2i mou_pos_two = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(s->sha.r_erase);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_pos_two.x, mou_pos_two.y)) {
            click_two = sfTrue;
        }
    }
    if (click_two) {
        sfRectangleShape_setFillColor(s->sha.r_erase,
        sfColor_fromRGB(220, 220, 220));
    } else {
        sfRectangleShape_setFillColor(s->sha.r_erase, sfWhite);
    }
    if (click_two) {
        s->tool_selected = 1;
    }
}

void button_click_edit_erase(S *s, N *n, sfEvent event)
{
    sfBool click = sfFalse;
    sfVector2i mou_pos = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r_s.r_s_edit_2);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_pos.x, mou_pos.y)) {
            click = sfTrue;
        }
        if (click) {
            s->tool_selected = 1;
        }
    }
}
