#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./constants.h"
#include "./game.h"
#include "./clock.h"


int main(int argc, char** argv){
    if(argc > 1){
        difficulty = atof(argv[1]);
    }
    set_clock(difficulty);
    printf("\nDOWNdownDOWN\n");
    int grid_size = GRID_ROWS * GRID_COLS;
    char grid[grid_size];
    init_grid(grid, grid_size);
    place_player(grid, (Pos){5,4});
    while(1){
        clock_t t1,t2;
        t1 = clock();
        display_grid(grid, grid_size);
        t2 = clock();
        float elapsed = ((float)(t2 - t1)/CLOCKS_PER_SEC);
        tick(elapsed);
        init_grid(grid, grid_size);
        place_player(grid, (Pos){rand() % GRID_ROWS, rand() % GRID_COLS});
    }
    
}


