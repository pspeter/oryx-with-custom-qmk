#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_0),                                    TD(DANCE_1),    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_ENTER,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 TD(DANCE_2),    DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_UE,          
    MO(3),          MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, DE_OE),LT(3,DE_AE),    
    KC_LEFT_SHIFT,  DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_SS,          KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_TRANSPARENT, KC_LEFT_ALT,    MO(4),          LCTL(DE_Z),                                                                                                     KC_ESCAPE,      MO(4),          KC_RIGHT_ALT,   KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_CTRL,  
    KC_SPACE,       KC_ENTER,       KC_TRANSPARENT,                 KC_MEH,         KC_DELETE,      KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_7,                                           TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(2),          KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_8,                                                                           TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_ASTR,        KC_0,           KC_9,           KC_LEFT_ALT,    KC_H,                                                                                                           LALT(LCTL(LSFT(DE_SS))),KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F10),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_N,                           LCTL(LSFT(KC_M)),LCTL(LSFT(KC_D)),KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    DE_AT,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    DE_HASH,        DE_Z,           KC_U,           KC_I,           DE_AE,          KC_P,           DE_UE,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           DE_OE,          DE_AE,                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_RIGHT_ALT,   KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, DE_RING,        DE_UNDS,        DE_LBRC,        DE_RBRC,        ST_MACRO_0,     DE_PARA,                                        DE_GRV,         DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         DE_AMPR,        DE_AT,          
    KC_TRANSPARENT, DE_BSLS,        DE_SLSH,        DE_LCBR,        DE_RCBR,        DE_ASTR,        DE_CIRC,                                                                        DE_ACUT,        DE_QST,         DE_LPRN,        DE_RPRN,        DE_MINS,        DE_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_HASH,        DE_DLR,         DE_PIPE,        DE_TILD,        ST_MACRO_1,                                     DE_PLUS,        DE_PERC,        DE_DQOT,        DE_QUOT,        DE_SCLN,        DE_EURO,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_2,     KC_PAGE_UP,     KC_HOME,        KC_END,         KC_KP_SLASH,    KC_KP_ASTERISK, DE_EQL,         
    KC_TRANSPARENT, KC_PAGE_UP,     KC_BSPC,        KC_UP,          KC_DELETE,      KC_PGDN,        KC_TRANSPARENT,                                 TO(6),          KC_PGDN,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_KP_MINUS,    
    KC_TRANSPARENT, KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT,                                                                 TO(5),          KC_BSPC,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_DOT,         KC_COMMA,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    AU_TOGG,        KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,TO(0),                                          TO(0),          KC_NO,          KC_WWW_FORWARD, KC_WWW_HOME,    KC_WWW_BACK,    OSM(MOD_LSFT),  KC_NO,          
    MU_TOGG,        KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          TO(0),                                          TO(0),          KC_NO,          KC_MS_BTN1,     KC_UP,          KC_MS_BTN2,     KC_NO,          KC_NO,          
    MU_NEXT,        KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          TO(0),                                                                          TO(0),          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_MS_BTN3,     KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,                                          KC_NO,          DM_REC1,        DM_PLY1,        DM_RSTP,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_DOWN,  TO(0),          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, DM_REC2,        DM_PLY2,        DM_RSTP,        KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT, KC_MY_COMPUTER, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_MEDIA_REWIND,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_MEDIA_FAST_FORWARD,TO(0),                                                                          TO(0),          KC_TRANSPARENT, DM_PLY1,        DM_REC1,        DM_RSTP,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_J,           KC_LEFT,        KC_K,           KC_RIGHT,       KC_L,                                           KC_TRANSPARENT, DM_PLY2,        DM_REC2,        DM_RSTP,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_MEDIA_PLAY_PAUSE,                                                                                                KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MEDIA_PREV_TRACK,KC_MEDIA_REWIND,KC_TRANSPARENT,                 KC_TRANSPARENT, KC_MEDIA_FAST_FORWARD,KC_MEDIA_NEXT_TRACK
  ),
};
const uint16_t PROGMEM combo0[] = { KC_E, KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(1)),
    COMBO(combo1, TO(0)),
    COMBO(combo2, TO(0)),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_0):
            return TAPPING_TERM + 90;
        case MT(MOD_LGUI, KC_A):
            return TAPPING_TERM + 110;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 110;
        case MT(MOD_LCTL, KC_D):
            return TAPPING_TERM + 110;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM + 80;
        case KC_SPACE:
            return TAPPING_TERM + 110;
        case TD(DANCE_1):
            return TAPPING_TERM + 90;
        case TD(DANCE_2):
            return TAPPING_TERM + 90;
        case KC_H:
            return TAPPING_TERM + 110;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM + 80;
        case MT(MOD_RCTL, KC_K):
            return TAPPING_TERM + 110;
        case MT(MOD_RALT, KC_L):
            return TAPPING_TERM + 110;
        case MT(MOD_RGUI, DE_OE):
            return TAPPING_TERM + 110;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {209,214,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {209,214,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {197,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {209,214,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,248,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {197,218,204}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,213,149}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,221,237}, {24,221,237}, {24,221,237}, {0,0,0}, {81,235,132}, {161,255,255}, {88,163,252} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {132,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {132,218,204}, {132,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {132,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {161,255,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {24,221,237}, {0,0,0}, {0,0,0}, {191,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {140,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {49,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {217,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {207,255,171}, {0,0,0}, {24,221,237}, {0,0,0}, {0,0,0}, {1,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {51,215,255}, {61,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {51,215,255}, {111,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {51,215,255}, {152,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {185,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {217,255,171}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {71,219,207}, {0,0,0}, {0,0,0}, {0,0,0}, {71,219,207}, {71,219,207}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {71,219,207}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {78,250,116}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {78,250,116}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {79,255,255}, {79,255,255}, {0,174,207}, {43,233,204}, {0,221,255}, {209,214,157}, {209,214,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,245,245}, {152,255,255}, {0,245,245}, {153,200,144}, {0,0,0}, {41,255,255}, {0,245,245}, {0,245,245}, {153,200,144}, {153,200,144}, {0,245,245}, {152,255,255}, {0,245,245}, {153,200,144}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {24,221,237}, {24,221,237}, {24,221,237}, {0,0,255}, {0,0,255}, {0,245,245}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {124,221,174}, {152,255,255}, {0,245,245}, {74,255,255}, {74,255,255}, {166,221,174}, {0,245,245}, {0,245,245}, {188,255,255}, {188,255,255}, {124,221,174}, {152,255,255}, {0,245,245}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,221,237}, {24,221,237}, {24,221,237}, {0,0,255}, {0,0,255}, {0,245,245}, {0,0,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {240,225,255}, {255,221,226}, {0,0,0}, {0,0,0}, {51,215,255}, {240,225,255}, {255,221,226}, {0,0,0}, {0,0,0}, {51,215,255}, {90,197,208}, {255,221,226}, {0,0,0}, {0,0,0}, {51,215,255}, {240,225,255}, {255,221,226}, {0,0,0}, {0,0,0}, {0,0,0}, {240,225,255}, {255,221,226}, {24,221,237}, {24,221,237}, {24,221,237}, {0,0,0}, {0,0,0}, {18,224,255}, {90,197,208}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,218,204}, {252,218,255}, {252,217,197}, {0,0,0}, {0,0,0}, {0,0,0}, {252,218,255}, {252,217,197}, {0,0,0}, {148,244,245}, {0,0,0}, {77,255,255}, {77,255,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,221,237}, {24,221,237}, {24,221,237}, {0,0,0}, {0,0,0}, {18,224,255}, {90,197,208} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_EQUAL)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_F11)) SS_DELAY(100) SS_LGUI(SS_TAP(X_X)) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_U));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_S)));
        tap_code16(LGUI(LSFT(KC_S)));
        tap_code16(LGUI(LSFT(KC_S)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_S)));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_S))); register_code16(LGUI(LSFT(KC_S)));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_A)));
        tap_code16(LALT(LCTL(KC_A)));
        tap_code16(LALT(LCTL(KC_A)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_A)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_A))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LSFT(KC_A)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_A))); register_code16(LALT(LCTL(KC_A)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_A))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_A)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_A))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_A)));
        tap_code16(LGUI(LSFT(KC_A)));
        tap_code16(LGUI(LSFT(KC_A)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_A)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_A))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_I))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_A))); register_code16(LGUI(LSFT(KC_A))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_A))); register_code16(LGUI(LSFT(KC_A)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_A))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_I))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_A))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_A))); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
