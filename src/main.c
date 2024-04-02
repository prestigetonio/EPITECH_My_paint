/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** main.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "paint.h"

int main(int argc, char **argv)
{
    Pen pen = {0};
    Detect det = {0};
    S s = {0};
    N n = {0};

    my_paint(&s, &n, &pen, &det);
    return 84;
}
