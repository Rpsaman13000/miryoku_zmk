// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom layers
#define XXX &none

// TODO: Add LED underglow support
// TODO: Add OLED screen support

// Layer specifications 

#define MIRYOKU_LAYER_BASE \
&kp B,             &kp L,             &kp D,             &kp W,             &kp Z,             &kp _,             &kp F,             &kp O,             &kp U,             &kp J,             \
U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, S),    &kp G,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),   \
U_LT(U_BUTTON, Q), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp P,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// TODO: Add the following two as the extra layer and the new layer that can be reached from there
/*
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             U_MT(N4, B),       U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NP,              U_NP,              &kp ESC,         U_LT(U_VTWO, V), &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP 

#define MIRYOKU_LAYER_GTWO \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             U_MT(N4, B),       U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NP,              U_NP,              &kp ESC,         U_LT(U_VTWO, V), &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP 
*/

// Layers used

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
