# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmira <kmira@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 16:23:01 by akharrou          #+#    #+#              #
#    Updated: 2019/03/01 01:03:34 by kmira            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INC_DIR	= includes
SRC_DIR	= srcs
OBJ_DIR	= objs

CTYPE =			ft_isalnum \
				ft_isalpha \
				ft_isascii \
				ft_isblank \
				ft_ischarset \
				ft_iscntrl \
				ft_isdigit \
				ft_isgraph \
				ft_isprint \
				ft_ispunct \
				ft_islower \
				ft_isspace \
				ft_isupper \
				ft_tolower \
				ft_toupper

STDIO = 		ft_putbyte_fd \
				ft_putbyte \
				ft_putbytes_fd \
				ft_putbytes \
				ft_putchar_fd \
				ft_putchar \
				ft_putendl_fd \
				ft_putendl \
				ft_putnbr_base_fd \
				ft_putnbr_base \
				ft_putnbr_fd \
				ft_putnbr \
				ft_putstr_fd \
				ft_putstr \
				ft_putstrtab_fd \
				ft_putstrtab

STDLIB =		ft_atoi_base \
				ft_atoi \
				ft_convert_base \
				ft_intlen \
				ft_itoa_base \
				ft_itoa \
				ft_memalloc \
				ft_realloc \
				ft_strlen \
				ft_memdel

STRING =		ft_bzero \
				ft_fast_find \
				ft_memccpy \
				ft_memchr \
				ft_memcmp \
				ft_memcpy_at \
				ft_memcpy_foward \
				ft_memcpy \
				ft_memmove \
				ft_memset \
				ft_str_go_to_end \
				ft_strcat \
				ft_strchr \
				ft_strchrs \
				ft_strclr \
				ft_strcmp \
				ft_strcpy \
				ft_strdel \
				ft_strdup_range \
				ft_strdup \
				ft_strequ \
				ft_striter \
				ft_striteri \
				ft_strjoin \
				ft_strlcat \
				ft_strlcpy \
				ft_strmap \
				ft_strmapi \
				ft_strncat \
				ft_strncmp \
				ft_strncpy \
				ft_strnequ \
				ft_strnew \
				ft_strnlen \
				ft_strnstr \
				ft_strrchr \
				ft_strrev \
				ft_strstr \
				ft_strtrim

FILES =  $(addprefix $(SRC_DIR)/ft_ctype/, $(CTYPE))
FILES += $(addprefix $(SRC_DIR)/ft_stdio/, $(STDIO))
FILES += $(addprefix $(SRC_DIR)/ft_stdlib/, $(STDLIB))
FILES += $(addprefix $(SRC_DIR)/ft_string/, $(STRING))

SRCS = $(addsuffix .c, $(FILES))

OBJS =	$(addsuffix .o, $(CTYPE))
OBJS +=	$(addsuffix .o, $(STDIO))
OBJS +=	$(addsuffix .o, $(STDLIB))
OBJS +=	$(addsuffix .o, $(STRING))

all: build
	@make $(NAME)

$(NAME): move
	@ar -rcs $(NAME) $(addprefix $(OBJ_DIR)/, $(OBJS))
	@echo "\033[1;32m""\t\t\t\t\t\t\t[Done!]"

build:
	@mkdir $(OBJ_DIR)
	@echo "\033[1;36m""\tMaking the objects for your program..."

move: $(OBJS)
	@for f in $(OBJS) ; do \
		mv $$f $(OBJ_DIR)/$$f; \
	done

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS) -I.$(INC_DIR)



DEL = /bin/rm -rf

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[1;34m""Flushing obj FILES"

fclean: clean
	@rm $(NAME)
	@echo "\033[0;31m""$(NAME) has been safely removed"

re: memo fclean all

memo:
	@echo "\033[0;31m""Again?"

.PHONY: all clean fclean re memo


