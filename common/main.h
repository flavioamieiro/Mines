#include "minefield.h"

void platform_init();
void draw_minefield(minefield* mf);
void shutdown();
uint8_t wait_for_any_key();
int random_number(int min_num, int max_num);
void game_over();