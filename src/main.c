#include "../so_long.h"

int move_player(int key)
{
	if (key == 65307)
		exit(0);
	return (0);
}

int main (void)
{
	void	*mlx;
	void	*mlx_win;

	printf("gosto muito da bia <3\n");
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Afonso Tereso Fernandes <3");
	mlx_key_hook(mlx_win, move_player, NULL);
	mlx_loop(mlx);
	return (0);
	
}
