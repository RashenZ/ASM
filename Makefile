##
## EPITECH PROJECT, 2018
## minilibc
## File description:
## makefile of minilibc
##

ASM		=	nasm

ASM_FLAGS	=	-f elf64

LD		=	ld

LDFLAGS		=	-fPIC -shared

RM		=	rm -f

SRCS	=	src/strlen.asm		\
		src/strchr.asm		\
		src/strcmp.asm		\
		src/strncmp.asm		\
		src/memset.asm		\
		src/memcpy.asm		\
		src/rindex.asm		\
		src/strstr.asm		\
		src/strpbrk.asm		\
		src/strcspn.asm		\
		src/memmove.asm		\
		src/strcasecmp.asm	\
		bonus/strrchr.asm	\
		bonus/write.asm		\
		bonus/memchr.asm	\
		bonus/memcmp.asm

OBJS	=	$(SRCS:.asm=.o)

NAME	=	libasm.so

%.o: %.asm
	$(ASM) -o $@ $< $(ASM_FLAGS)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(LD) $(LDFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all


.PHONY:	all clean fclean re

coffee: all clean
	@echo "COFFEE MAKE B)"
