/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** analyse_all_two.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "paint.h"

void detect_click(Detect *det, sfEvent event)
{
    switch (event.type) {
        case sfEvtMouseButtonPressed:
            det->mouse_check = true;
            break;
        case sfEvtMouseButtonReleased:
            det->mouse_check = false;
            break;
    }
}
