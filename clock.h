#ifndef CLOCK_H
#define CLOCK_H

#include <time.h>

#define BASE_TICK_RATE 1

extern float clocks_per_tick;

/**
 * @brief 
 * 
 * Evaluate time passed since last tick and wait for next tick
 * 
 * @param elapsed - time passed since last tick
 * 
 */
void tick(int);


/**
 * @brief 
 * 
 * Increase the tick rate based on difficulty
 * 
 * @param difficulty - the level of difficulty
 */
void set_clock(float);


#endif