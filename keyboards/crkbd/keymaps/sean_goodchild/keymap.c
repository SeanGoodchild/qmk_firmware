/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include QMK_KEYBOARD_H
#include "keymap_extras\keymap_uk.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,    KC_O, UK_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, UK_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(1),   KC_LSFT, KC_ENT,     KC_SPC,  KC_BSPC,  MO(2)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,  KC_EXLM,  KC_AT,  UK_PND,  KC_DLR, KC_PERC,                      KC_RPRN, KC_LPRN, KC_EXLM, KC_CIRC, KC_SCLN, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,  KC_GRV,                      KC_RCBR, KC_LCBR, KC_UNDS, UK_HASH, UK_COLN, UK_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TILD,                      KC_RBRC, KC_LBRC, KC_COMM,  KC_DOT, KC_SLSH, UK_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______,  KC_LSFT, KC_ENT,     KC_SPC,  KC_BSPC,  TO(3)
                                      //`--------------------------'  `--------------------------'
  ),


    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,   KC_F1,   KC_F2,   KC_UP,   KC_F4,   KC_F5,                      KC_PLUS,    KC_7,    KC_8,    KC_9,  KC_DLR, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,  KC_F11, KC_LEFT, KC_DOWN,KC_RIGHT,  KC_F12,                       KC_EQL,    KC_4,    KC_5,    KC_6,    KC_0, KC_ASTR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      KC_MINS,    KC_1,    KC_2,    KC_3,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           TO(3), KC_LSFT, KC_ENT,      KC_SPC, KC_BSPC, _______
                                      //`--------------------------'  `--------------------------'
  ),


    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      TO(4), KC_EXLM,   KC_AT,  UK_PND,  KC_DLR, KC_PERC,                      KC_PLUS,    KC_7,    KC_8,    KC_9,  KC_DLR, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,  KC_GRV,                       KC_EQL,    KC_4,    KC_5,    KC_6,    KC_0, KC_ASTR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     QK_BOOT, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TILD,                      KC_MINS,    KC_1,    KC_2,    KC_3,  KC_DOT, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           TO(0), KC_LSFT,  KC_ENT,     KC_SPC, KC_BSPC,   TO(0)
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,  KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,                        KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LSFT, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_LCTL, KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,                        KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ENT, KC_LCTL,  KC_SPC,     KC_SPC, KC_BSPC,   TO(0)
                                      //`--------------------------'  `--------------------------'
  ),

};
