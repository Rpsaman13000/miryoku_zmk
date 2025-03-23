// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom layers

#define MIRYOKU_ALTERNATIVES_BASE_GRAPHITE \
&kp B,             &kp L,             &kp D,             &kp W,             &kp Z,             &kp _,             &kp F,             &kp O,             &kp U,             &kp J,             \
U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, S),    &kp G,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),   \
U_LT(U_BUTTON, Q), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp P,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_GAME \
KC_Q,              KC_W,             KC_E,             KC_R,              KC_T,             KC_Y,             KC_U,             KC_I,             KC_O,              KC_P,             \
KC_A,              KC_S,             KC_D,             KC_F,              KC_H,             KC_J,             KC_K,             KC_L,              KC_QUOT,           \
KC_Z,              KC_X,             KC_C,             KC_V,              KC_N,             KC_M,             KC_COMMA,         KC_DOT,            KC_SLASH,         \
U_NP,              U_NP,             KC_LALT,          KC_SPC,           MO(U_GAMENUM),     KC_ENT,           KC_BSPC,          KC_DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_GAMENUM \
KC_ESC,            KC_1,              KC_2,              KC_3,             KC_T,             KC_LBRC,          KC_F7,            KC_F8,            KC_F9,             KC_RBRC,         \
KC_LSFT,           KC_4,              KC_5,              KC_6,             KC_G,             KC_EQL,           KC_F4,            KC_F5,            KC_F6,             KC_SCLN,         \
KC_LCTL,           KC_7,              KC_8,              KC_9,             KC_B,             KC_BSLS,          KC_F1,            KC_F2,            KC_F3,             KC_GRAVE,        \
U_NP,              U_NP,              DF(U_BASE),        KC_SPC,           KC_NO,            KC_MINUS,         KC_0,             KC_DOT,           U_NP,              U_NP

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
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAMENUM,"GNum")
