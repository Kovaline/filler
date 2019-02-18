#include "viz.h"

void	img(t_pr *mlx)
{
	int		bpp;
	int		sl;
	int		e;

	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, 1280, 720);
	mlx->imgdata = (int*)mlx_get_data_addr(mlx->img_ptr, &bpp, &sl, &e);
}