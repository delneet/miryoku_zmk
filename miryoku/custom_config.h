// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_EXTRA_COLEMAK
#define MIRYOKU_CLIPBOARD_MAC

#define MIRYOKU_LAYER_DEV \
U_NA,              U_NA,              &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LPAR,          &kp RPAR,          &kp EQUAL,         &kp MINUS,         &kp PIPE,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LBKT,          &kp RBKT,          &kp AMPS,          &kp CARET,         &kp COLON,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_SYM,       U_NA,              &kp LBRC,          &kp RBRC,          &kp LT,            &kp GT,            &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp BSPC,          U_NA,              U_NP,              U_NP

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
MIRYOKU_X(DEV,    "Dev")

#define MIRYOKU_LAYERMAPPING_DEV MIRYOKU_MAPPING

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
#define U_DEV    10