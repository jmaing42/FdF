all: mlx

.cache/mlx:
	mkdir -p .cache/mlx.tmp
	tar xf ../assets/minilibx_mms_20191025_beta.tar -C .cache/mlx.tmp
	rm -rf .cache/mlx
	mv .cache/mlx.tmp .cache/mlx
.cache/mlx/minilibx_mms_20191025_beta/libmlx.dylib: .cache/mlx
	make -C .cache/mlx/minilibx_mms_20191025_beta -j 1 libmlx.dylib

CFLAGS := -Wall -Wextra -Werror -std=c99 -pedantic
LDFLAGS := -L.cache/mlx/minilibx_mms_20191025_beta -lmlx
