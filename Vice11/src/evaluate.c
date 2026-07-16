#include "stdio.h"
#include "defs.h"

int EvalPosition(const S_BOARD *pos) {
    ASSERT(CheckBoard(pos));

    // Base material score
    int score = pos->material[WHITE] - pos->material[BLACK];
    
    // Return score relative to side to move
    if(pos->side == WHITE) {
        return score;
    } else {
        return -score;
    }
}
