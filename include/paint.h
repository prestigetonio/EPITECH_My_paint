/*
** EPITECH PROJECT, 2023
** B-MUL-200-TLS-2-1-mypaint-tony.fournales
** File description:
** paint.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#ifndef PAINT_H
    #define PAINT_H
    #define BACK "assets/back.png"
    #define BACKGROUND "assets/background2.png"
    #define ERASE "assets/gomme.png"
    #define PEN "assets/crayon.png"
    #define S_OPENFILE "assets/nav_button/openfile.png"
    #define S_SAVEFILE "assets/nav_button/savefile.png"
    #define S_NEWFILE "assets/nav_button/newfile.png"
    #define S_PEN "assets/nav_button/pen.png"
    #define S_ERASE "assets/nav_button/erase.png"
    #define S_HELP "assets/nav_button/h_text.png"
    #define L_EDIT "assets/edit.png"
    #define L_HELP "assets/help.png"
    #define L_FILE "assets/file.png"
    #define S_SQUARE "assets/nav_button/square.png"
    #define S_CIRCLE "assets/nav_button/circle.png"
    #define S_LINE "assets/nav_button/line.png"

typedef struct Spr {
    sfSprite *sprite;
    sfSprite *sprite2;
    sfTexture *texture;
    sfTexture *texture2;
    sfTexture *logo_pen;
    sfTexture *logo_eraser;
    sfRenderWindow *window;
    sfVideoMode vid_m;
    sfRectangleShape *name;
    sfRectangleShape *button;
    sfColor *color;
} Spr;

typedef struct Shape {
    sfRectangleShape *r_pen;
    sfRectangleShape *r_erase;
} Shape;

typedef struct Logo {
    sfTexture *l_file;
    sfTexture *l_edit;
    sfTexture *l_help;
    sfTexture *l_square;
    sfTexture *l_circle;
    sfTexture *l_line;
} Logo;

typedef struct Rect {
    sfRectangleShape *r_file;
    sfRectangleShape *r_edit;
    sfRectangleShape *r_help;
    sfRectangleShape *r_square_1;
    sfRectangleShape *r_circle_1;
    sfRectangleShape *r_line_1;
} Rect;

typedef struct L_Spawn {
    sfTexture *l_s_file_1;
    sfTexture *l_s_file_2;
    sfTexture *l_s_file_3;
    sfTexture *l_s_edit_1;
    sfTexture *l_s_edit_2;
    sfTexture *l_s_help_1;
} L_Spawn;

typedef struct R_Spawn {
    sfRectangleShape *r_s_file_1;
    sfRectangleShape *r_s_file_2;
    sfRectangleShape *r_s_file_3;
    sfRectangleShape *r_s_edit_1;
    sfRectangleShape *r_s_edit_2;
    sfRectangleShape *r_s_h_1;
} R_Spawn;

typedef struct N {
    Logo l;
    Rect r;
    L_Spawn l_s;
    R_Spawn r_s;
} N;

typedef struct Pen {
    sfTexture *pen_texture;
    sfSprite *pen_sprite;
    sfImage *pixel;
} Pen;

typedef struct Detect {
    bool mouse_check;
} Detect;

typedef struct Size {
    int width;
    int height;
    int x;
    int y;
} Size;

typedef struct S {
    Spr spr;
    Shape sha;
    int tool_selected;
} S;

typedef enum ToolSelected {
    PEN_TOOL,
    ERASER_TOOL,
    CIRCLE_PEN_TOOL
} ToolSelected;


void button_spawn_e1(S *s, sfEvent event, N *n);
void button_spawn_e2(S *s, sfEvent event, N *n);
void choice_analyse(S *s, sfRenderWindow *window, N *n, Detect *det);
void init_my_paint(S *s, N *n, Pen *pen, sfVideoMode vid_m);
void detect_click(Detect *det, sfEvent event);
int my_paint(S *s, N *n, Pen *pen, Detect *det);
void text(S *s, N *n);
void create_all(S *s, N *n, Pen *pen);
int analyse_event(S *s, sfEvent event, N *n, Detect *det);
void button_pen(S *s);
void button_eraser(S *s);
void button_file(N *n);
void button_file_spawn(N *n);
void button_help(N *n);
void button_help_spawn(N *n);
void button_edit(N *n);
void button_edit_spawn(N *n);
void button_spawn(S *s, sfEvent event, N *n);
void button_spawn2(S *s, sfEvent event, N *n);
void button_spawn3(S *s, sfEvent event, N *n);
void init_button(S *s, N *n);
#endif
