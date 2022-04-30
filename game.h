#ifndef GAME_H
#define GAME_H

extern float difficulty;

typedef struct pos{
    int x_pos;
    int y_pos;
} Pos;

/**
 * @brief Initialize the grid
 * 
 * Generate the grid.
 * 
 * @param grid - the grid for the game
 * @param grid_size - the size of the grid
 */
void init_grid(char*, int);

/**
 * @brief Display the grid
 * 
 * Display the grid on the screen.
 * 
 * @param grid - the grid for the game
 * @param grid_size - the size of the grid
 */
void display_grid(char*, int);

/**
 * @brief Place the player on the grid.
 * 
 * Place the player at the specified x,y coordinates starting from the top left.
 * 
 * @param grid - the grid for the game
 * @param pos - the coordinates for the player's position
 */
void place_player(char*, Pos);

/**
 * @brief Place an object on the grid.
 * 
 * Place the object at the specified x,y coordinates starting from the top left.
 * 
 * @param grid - the grid for the game
 * @param pos - the coordinates for the object's position
 */
void place_object(char*, Pos);


#endif