#include "mastermind.h"

int main(void) {
    MASTERMIND_PREFERENCES myprefs = {
        .code_length = 4,
        .color_count = 6,
        .attempt_count = 7,
        .multiple_colors = false,
        .hints_position_based = false
    };
    mastermind(myprefs, false);

    return 0;
}

