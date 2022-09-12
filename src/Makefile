Q := $(if $(filter 1,$(V) $(VERBOSE)),,@)
MAKE := $(MAKE) $(if $(filter 1,$(V) $(VERBOSE)),,--no-print-directory) $(if $(filter 1,$(NO_ADDITIONAL_J)),,-j $(shell sh build/script/nproc.sh))

CC := clang
CCLD := clang
AR := ar
ARFLAGS := cr$(if $(filter 1,$(V) $(VERBOSE)),v,)
CPPFLAGS := $(shell find . -type d -mindepth 1 | grep -v /test/ | sed "s/^/-I /" | xargs)
CFLAGS := -Wall -Wextra -Werror -std=c99 -pedantic $(CPPFLAGS)

# mlx
CFLAGS += -I.cache/mlx/minilibx_opengl_20191021
LDFLAGS += -L.cache/mlx/minilibx_opengl_20191021 -lmlx -framework OpenGL -framework AppKit

OBJ_DIR := .cache

SRCS_LIBWRAP := $(shell find . -name "wrap_*.c" | grep -v /test/ | xargs)
SRCS_FDF := $(shell find . -name "fdf_*.c" | grep -v /test/ | xargs)
SRCS_LIBF := $(shell find . -name "f_*.c" | grep -v /test/ | xargs)
SRCS_LIBFT := $(shell find . -name "ft_*.c" | grep -v /test/ | xargs)
SRCS_LIBFTM := $(shell find . -name "ftm_*.c" | grep -v /test/ | xargs)

NAME := fdf
EXECUTABLE_TARGETS := $(NAME).exe

all: $(EXECUTABLE_TARGETS)
bonus: all
clean:
	$Qrm -rf $(OBJ_DIR)
fclean:
	$Q$(MAKE) clean
	$Qrm -f $(EXECUTABLE_TARGETS)
re:
	$Q$(MAKE) NO_ADDITIONAL_J=1 fclean
	$Q$(MAKE) NO_ADDITIONAL_J=1 all
test:
	$Qfind . -type d -mindepth 1 -name "test" | xargs -L1 -I {} make -C {} test
.PHONY: all bonus clean fclean re test

.cache/mlx:
	mkdir -p .cache/mlx.tmp
	tar xf ../assets/minilibx_opengl.tgz -C .cache/mlx.tmp
	rm -rf .cache/mlx
	mv .cache/mlx.tmp .cache/mlx
.cache/mlx/minilibx_opengl_20191021/libmlx.dylib: .cache/mlx
	make -C .cache/mlx/minilibx_opengl_20191021 -j 1

PROFILE ?= release
ifeq ($(PROFILE),release)
CFLAGS += -O3 -DNDEBUG
else ifeq ($(PROFILE),debug)
CFLAGS += -g3 -DDEBUG
else
$(error Bad profile)
endif

TARGET ?= production
ifeq ($(TARGET),production)
CFLAGS += -DNDEVELOPMENT
else ifeq ($(TARGET),development)
CFLAGS += -DDEVELOPMENT
else
$(error Bad target)
endif

SUFFIX := .$(TARGET).$(PROFILE)$(if $(SANITIZER),.$(SANITIZER))
CFLAGS += $(if $(SANITIZER),-fsanitize=$(SANITIZER),)
LDFLAGS += $(if $(SANITIZER),-fsanitize=$(SANITIZER),)

$(OBJ_DIR)/%.a:
	$Qmkdir -p $(@D)
	$Q$(AR) $(ARFLAGS) $@ $^
$(OBJ_DIR)/%.exe:
	$Qmkdir -p $(@D)
	$Q$(CCLD) $(LDFLAGS) -o $@ $^
$(OBJ_DIR)/%$(SUFFIX).o: %.c | .cache/mlx
	$Qmkdir -p $(@D)
	$Q$(CC) $(CFLAGS) -MJ $@.part.json -MMD -o $@ -c $<

$(OBJ_DIR)/libwrap$(SUFFIX).a: $(patsubst ./%.c,$(OBJ_DIR)/%$(SUFFIX).o,$(SRCS_LIBWRAP))
$(OBJ_DIR)/libf$(SUFFIX).a: $(patsubst ./%.c,$(OBJ_DIR)/%$(SUFFIX).o,$(SRCS_LIBF))
$(OBJ_DIR)/libft$(SUFFIX).a: $(patsubst ./%.c,$(OBJ_DIR)/%$(SUFFIX).o,$(SRCS_LIBFT))
$(OBJ_DIR)/libftm$(SUFFIX).a: $(patsubst ./%.c,$(OBJ_DIR)/%$(SUFFIX).o,$(SRCS_LIBFTM))
$(OBJ_DIR)/$(NAME)$(SUFFIX).exe: $(patsubst ./%.c,$(OBJ_DIR)/%$(SUFFIX).o,$(SRCS_FDF)) $(OBJ_DIR)/libwrap$(SUFFIX).a $(OBJ_DIR)/libf$(SUFFIX).a $(OBJ_DIR)/libft$(SUFFIX).a $(OBJ_DIR)/libftm$(SUFFIX).a | .cache/mlx/minilibx_opengl_20191021/libmlx.dylib
$(EXECUTABLE_TARGETS): %.exe: $(OBJ_DIR)/%$(SUFFIX).exe
	$Qcp $< $@
.PHONY: $(EXECUTABLE_TARGETS)

.PHONY: compile_commands.json
compile_commands.json:
	$Q$(MAKE) -k PROFILE=debug TARGET=development all ; (printf "[" && find .cache -name "*.development.debug.o.part.json" | xargs cat && printf "]") > $@
.PHONY: dev
dev: compile_commands.json
	$Qfind . -type d -name test | xargs -L1 -I {} make -C {} dev
.PHONY: run
run: $(NAME).exe
	$QDYLD_LIBRARY_PATH=.cache/mlx/minilibx_opengl_20191021 ./$<

# dependencies
-include $(patsubst ./%.c,$(OBJ_DIR)/%$(SUFFIX).d,$(SRCS))

%.o: .cache/mlx
