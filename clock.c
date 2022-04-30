#include <stdio.h>
#include <unistd.h>

#include "clock.h"


float clocks_per_tick;


void tick(int elapsed){
    // diff = (50 - 20) == 30
    float diff = clocks_per_tick - elapsed;
    printf("diff: %f\n", diff);
    printf("clocks elapsed: %d\n", elapsed);
    
    // sleep(100 / 30) == 3.3
    float s = (diff / CLOCKS_PER_SEC)/1;
    printf("sleeping for: %f clocks, %f seconds\n", diff, s);
    sleep(s);
    printf("tick\n");
}

void set_clock(float difficulty){
    clocks_per_tick = CLOCKS_PER_SEC/(BASE_TICK_RATE * difficulty);
    printf("clock set to: %f\n", clocks_per_tick);
}