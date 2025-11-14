# NAME receives the static library file
NAME = libft.a

PART1 = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_tolower.c ft_toupper.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memcmp.c ft_memchr.c ft_atoi.c ft_bzero.c ft_calloc.c

PART2 = ft_substr.c ft_strjoin.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS = ${PART1} ${PART2}

SRCS_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}
# ${OBJS} est une variable contenant tous les fichiers .o

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

HEADER = .

# defines a rule to compile
.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

# .c.o signifie:  « Pour tout fichier `.c`, voici comment générer le fichier `.o` correspondant. »
# Autrement dit, si `make` voit qu’il a besoin de `ft_printf.o` et qu’il trouve `ft_printf.c`, il utilisera cette règle.*/

# -I includes indique au compilateur où chercher les fichiers header (.h).
# Cela dit a cc: Va aussi regarder dans le dossier includes/ pour trouver les fichiers .h

# -c $ < -$ {<:. c = .O} specifies how the source file will be generated
# -c $< Compile le premier fichier dépendance (le .c) sans lier le programme.
# $< = le nom du fichier .c qui déclenche la règle.

# -o ${<:.c=.o} Spécifie le nom du fichier de sortie (.o).
# ${<:.c=.o} veut dire : “Prends le nom du fichier source ($<), remplace .c par .o.”

# Maintenant, il faut indiquer comment construire la bibliothèque (ou l’exécutable) finale à partir des fichiers objets (.o)

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

# $(NAME): ${OBJS} signifie pour construire $(NAME) (donc libft.a), tu dois dabord avoir compilé tous les fichiers listés dans ${OBJS}
# ar rcs ${NAME} ${OBJS}: commande qui cree la bibliotheque statique (une archive .a)
# a: archive, r: replace (si existes), rcs (des options): replace, create, index

# when makefile is called without arguments
all: ${NAME}

bonus: ${OBJS} ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}
# defines the rule to clean, erases the .o files

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

# erase the same files of clean and the static library
fclean: clean
	${RM} ${NAME}

# clean all files and create them again
re: fclean all

# informs MakeFile that whenever these rules are called they need to be executed
.PHONY: all clean fclean re bonus
