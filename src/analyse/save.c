/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** save.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void button_save(S *s, N *n, sfEvent event)
{
    sfBool click_save = sfFalse;
    sfVector2i mou_pos_two = sfMouse_getPositionRenderWindow(s->spr.window);
    sfFloatRect detect = sfRectangleShape_getGlobalBounds(n->r_s.r_s_file_3);

    if (event.type == sfEvtMouseButtonPressed) {
        if (sfFloatRect_contains(&detect, mou_pos_two.x, mou_pos_two.y)) {
            click_save = sfTrue;
        }
    }
    if (click_save) {
        s->tool_selected = 2;
    }
}
