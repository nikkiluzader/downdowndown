#include <stdio.h>

#include "./constants.h"
#include "./game.h"

float difficulty = 1.0;

void init_grid(char* grid, int grid_size){
    
    for(int i = 0; i < grid_size; ++i){
        grid[i] = '-';
    }   
}

void display_grid(char* grid, int grid_size){
    for(int i = 0; i < grid_size; ++i){
        if(i % GRID_ROWS == 0){
            printf("\n");
        }
        printf("%c",grid[i]);
    }
    printf("\n\n");
}

void place_player(char* grid, Pos pos){
    if(pos.x_pos >= GRID_ROWS || pos.y_pos >= GRID_COLS){
        printf("Invalid x_pos or y_pos\n");
        return;
    }

    int i = ((GRID_ROWS * pos.x_pos) + pos.y_pos);

    grid[i] = '@';

}

void place_object(char* grid, Pos pos){
    if(pos.x_pos >= GRID_ROWS || pos.y_pos >= GRID_COLS){
        printf("Invalid x_pos or y_pos\n");
        return;
    }

    int i = ((pos.x_pos / GRID_ROWS) + pos.y_pos);

    grid[i] = '@';

}

