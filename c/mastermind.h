/*!mastermind.h
 * Header-File for game MasterMind.
 * (c) Feb 2018 Patrick Goldinger and Matthias Gehwolf
 * License: MIT
 */

#pragma once

#ifndef MASTERMIND_H
#define MASTERMIND_H

#define MMPREFS_MIN_CODE_LENGTH 2
#define MMPREFS_MAX_CODE_LENGTH 8
#define MMPREFS_MIN_COLOR_COUNT 4
#define MMPREFS_MAX_COLOR_COUNT 8
#define MMPREFS_MIN_ATTEMPT_COUNT 3
#define MMPREFS_MAX_ATTEMPT_COUNT 12
#define MM_COLOR_BGFG 0xF0

#if defined(_WIN32) || defined(_WIN64)
    #define __usingwindows__ 1
    #define MMKEY_BACKSPACE '\b'
    #define KEY_BACKSPACE '\b'
    #define MMKEY_ENTER '\r'
    #define KEY_ENTER '\n'
    #define MMFRAME_TOP_LEFT_CORNER 201
    #define MMFRAME_TOP_RIGHT_CORNER 187
    #define MMFRAME_BOTTOM_LEFT_CORNER 200
    #define MMFRAME_BOTTOM_RIGHT_CORNER 188
    #define MMFRAME_LINE_HORIZONTALLY 205
    #define MMFRAME_LINE_VERTICALLY 186
    #define MMFRAME_TITLE_LEFT 185
    #define MMFRAME_TITLE_RIGHT 204
    typedef enum { false, true } bool;
#elif defined(__linux__) || defined(__linux) || defined(linux)
    #define __usinglinux__ 1
    #define MMKEY_BACKSPACE '\b'
    #define MMKEY_ENTER '\n'
    #define MMFRAME_TOP_LEFT_CORNER '+'
    #define MMFRAME_TOP_RIGHT_CORNER '+'
    #define MMFRAME_BOTTOM_LEFT_CORNER '+'
    #define MMFRAME_BOTTOM_RIGHT_CORNER '+'
    #define MMFRAME_LINE_HORIZONTALLY '-'
    #define MMFRAME_LINE_VERTICALLY '|'
    #define MMFRAME_TITLE_LEFT '|'
    #define MMFRAME_TITLE_RIGHT '|'
    #include <stdbool.h>
#endif

typedef struct {
    unsigned int code_length; // 2 - 8
    unsigned int color_count; // 4 - 8
    unsigned int attempt_count; // 3 - 12
    bool multiple_colors; // false - true
    bool hints_position_based; // false - true
} MASTERMIND_PREFERENCES;

/// <summary>Manages which action has to be done.</summary>
/// <param name='initprefs'>Initial preferences.</param>
/// <param name='start_game_direct'>Skip settings screen and go directly to game.</param>
/// <returns>Gives back an integer value of 0.</returns>
int mastermind(MASTERMIND_PREFERENCES initprefs, bool start_game_direct);

#endif
