#include QMK_KEYBOARD_H

enum custom_keycodes {
    SLCK_NXT = SAFE_RANGE,
    SLCK_PRV
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SLCK_NXT:
            if (record->event.pressed) {
                // when keycode SLCK_NXT is pressed
                tap_code16(S(A(KC_DOWN)));
                wait_ms(100);
                tap_code(KC_ESC);
            }
            break;

        case SLCK_PRV:
            if (record->event.pressed) {
                // when keycode SLCK_PRV is pressed
                tap_code16(S(A(KC_UP)));
                wait_ms(100);
                tap_code(KC_ESC);
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,      KC_BSPC,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,         KC_ENT,
        KC_LSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,             KC_RSFT,
        KC_DEL,  KC_CAPS, KC_LALT, KC_LGUI,  LT(1, KC_ENT), LT(2, KC_SPC),      KC_RGUI,   KC_RALT, SLCK_PRV, SLCK_NXT,  KC_NO
    ),

    [1] = LAYOUT(
        _______, KC_SLCK, KC_PAUS, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,     _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,       _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,        _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______,
        _______, _______, _______, _______,  _______,            _______,                 _______,   _______, _______, _______,  RESET
    ),

    [2] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,       _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______,        _______,
        _______,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______,
        _______, _______, _______, _______,  _______,            _______,                 _______,   _______, _______, _______,  _______
    ),
};
