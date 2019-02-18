#include "minilibx_macos/mlx.h"

typedef struct s_pr
{
	void	*mlx_ptr;
	void	*win_ptr;

	void	*img_ptr;
	int		*imgdata;

	int		mapheight;
	int		mapwidth;
	char	**field;
	int		colord;
	int		colorx;
	int		coloro;
}				t_pr;

void	img(t_pr *mlx);