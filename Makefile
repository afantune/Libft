# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afantune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 12:36:13 by afantune          #+#    #+#              #
#    Updated: 2024/11/05 16:11:54 by afantune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_isalnum.c srcs/ft_isprint.c srcs/ft_memcmp.c \
					srcs/ft_strlcat.c srcs/ft_strncmp.c srcs/ft_substr.c \
					srcs/ft_atoi.c srcs/ft_isalpha.c srcs/ft_split.c \
					srcs/ft_itoa.c srcs/ft_memcpy.c  srcs/ft_putendl_fd.c \
					srcs/ft_strlcpy.c srcs/ft_putchar_fd.c srcs/ft_strmapi.c\
					srcs/ft_strnstr.c srcs/ft_tolower.c srcs/ft_bzero.c \
					srcs/ft_isascii.c srcs/ft_memcpy.c srcs/ft_strjoin.c \
					srcs/ft_memmove.c srcs/ft_putnbr_fd.c srcs/ft_strdup.c \
					srcs/ft_strlen.c srcs/ft_strrchr.c srcs/ft_strchr.c \
					srcs/ft_toupper.c srcs/ft_calloc.c srcs/ft_strtrim.c \
					srcs/ft_isdigit.c srcs/ft_memchr.c srcs/ft_memset.c \
					srcs/ft_putstr_fd.c srcs/ft_striteri.c
SRCS_B	= srcs_b/ft_lstnew.c srcs_b/ft_lstadd_back.c srcs_b/ft_lstadd_front.c \
	  srcs_b/ft_lstsize.c srcs_b/ft_lstlast.c srcs_b/ft_lstclear.c \
	  srcs_b/ft_lstdelone.c srcs_b/ft_lstiter.c srcs_b/ft_lstmap.c

OBJSDIR = objs
OBJS    = $(patsubst srcs/%.c, $(OBJSDIR)/%.o, $(SRCS))
OBJS_B  = $(patsubst srcs_b/%.c, $(OBJSDIR)/%.o, $(SRCS_B))
INCS	= includes
NAME	= libft.a
LIBC	= @ar rcs
LIBR	= @ranlib
CC		= @cc
RM		= @rm -f
CFLAGS	= -Wall -Wextra -Werror -I ${INCS}

$(OBJSDIR)/%.o: srcs/%.c
	@mkdir -p $(OBJSDIR)
	${CC} ${CFLAGS} -c $< -o $@

$(OBJSDIR)/%.o: srcs_b/%.c
	@mkdir -p $(OBJSDIR)
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}
	@$(MAKE) -s progress_bar
	@echo "\033[1m\033[32m🤖 ⤑ Files Compiled\033[0m💿"

all: ${NAME}
	@$(MAKE) -s progress_bar

bonus: ${OBJS_B}
	@${MAKE} -s ${NAME}
	${LIBC} ${NAME} ${OBJS} ${OBJS_B}
	@$(MAKE) -s progress_bar
	@echo "\033[1m\033[36m🤖 ⤑ Bonus Files Compiled\033[0m📀"
	@touch bonus

clean:
	${RM} ${OBJS} ${OBJS_B} bonus
	${RM} -r $(OBJSDIR)
	@echo "\033[1m\033[93m🤖 ⤑ Objects Cleaned\033[0m 🧹"

progress_bar:
	@progress=0; \
	while [ $$progress -lt 100 ]; do \
		progress=$$((progress + 2)); \
		if [ $$progress -gt 100 ]; then progress=100; fi; \
		progress_bar=$$(printf "%-$$(($$progress / 2))s"); \
		printf "\r[%-1s] %d%%" "$$progress_bar" $$progress; \
		sleep 0.05; \
	done; \
	echo ""

fclean: clean
	${RM} ${NAME}
	@echo "\033[38;5;196m🤖 ⤑ Libft.a Has Been Cleaned\033[0m 🧹"

re: fclean all

.PHONY: all clean re fclean progress_bar

