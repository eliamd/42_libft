# **************************************************************************** #
#                                  CONFIGURATION                               #
# **************************************************************************** #

# Nom de l'exécutable (la librairie statique)
NAME        := libft.a

# Compilateur et options de compilation
CC          := cc
CFLAGS      := -Wall -Wextra -Werror

# Commande pour créer l'archive de la librairie statique
AR          := ar rcs

# Commandes pour nettoyer
RM          := rm -f


# **************************************************************************** #
#                                 SOURCES                                      #
# **************************************************************************** #

# Liste des fichiers sources (sans les bonus)
SRCS        := ft_isdigit.c \
               ft_strlcpy.c \
               ft_strlen.c \
               ft_bzero.c \
               ft_isascii.c \
               ft_memcpy.c \
               ft_isprint.c \
               ft_isalpha.c \
               ft_memset.c \
               ft_memmove.c \
               ft_strlcat.c \
               ft_atoi.c \
               ft_isalnum.c \
               ft_strlcat.c \
               ft_toupper.c \
               ft_tolower.c \
               ft_strncmp.c \
               ft_strnstr.c \
               ft_strchr.c \
               ft_strrchr.c \
               ft_memcmp.c \
               ft_memchr.c \
               ft_calloc.c \
               ft_substr.c \
               ft_strdup.c \
               ft_strjoin.c \
               ft_strtrim.c \
               ft_split.c \
               ft_itoa.c \
               ft_strmapi.c \
               ft_striteri.c \
               ft_putchar_fd.c \
               ft_putstr_fd.c \
               ft_putendl_fd.c \
               ft_putnbr_fd.c

# Liste des fichiers sources pour les bonus
SRCS_BONUS  := ft_lstnew_bonus.c \
               ft_lstadd_front_bonus.c \
               ft_lstsize_bonus.c \
               ft_lstlast_bonus.c \
               ft_lstadd_back_bonus.c \
               ft_lstdelone_bonus.c \
               ft_lstclear_bonus.c \

# Transformation des fichiers sources en fichiers objets
OBJS        := $(SRCS:.c=.o)
OBJS_BONUS  := $(SRCS_BONUS:.c=.o)

# **************************************************************************** #
#                                 RÈGLES                                       #
# **************************************************************************** #

# Règle par défaut : compilation de la lib
all: $(NAME)

# Compilation de la librairie
$(NAME): $(OBJS)
	@echo " "
	@echo ">>>>> Création de $(NAME) ... <<<<<"
	@echo " "
	$(AR) $(NAME) $(OBJS)
	@echo " "
	@echo ">>>>> $(NAME) créé avec succès. <<<<<"
	@echo " "

# Compilation des fichiers bonus
bonus: $(OBJS) $(OBJS_BONUS)
	@echo " "
	@echo ">>>>> Ajout des bonus à $(NAME)... <<<<<"
	@echo " "
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	@echo " "
	@echo ">>>>> Bonus ajoutés avec succès. <<<<<"
	@echo " "

# Compilation des fichiers objets (dans $(OBJ_DIR))
%.o: %.c | $(OBJ_DIR)
	@echo ">>>>> Compilation de $< ... <<<<<"
	$(CC) $(CFLAGS) -c $< -o $@

# Création du répertoire pour les objets
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# **************************************************************************** #
#                                 NETTOYAGE                                    #
# **************************************************************************** #

# Suppression des fichiers objets
clean:
	@echo " "
	@echo ">>>>> Nettoyage des fichiers objets... <<<<<"
	@echo " "
	$(RM) $(OBJS) $(OBJS_BONUS)
	@rmdir $(OBJ_DIR) 2> /dev/null || true
	@echo " "
	@echo ">>>>> Nettoyage terminé. <<<<<"
	@echo " "

# Suppression des fichiers objets et de la librairie
fclean: clean
	@echo " "
	@echo ">>>>> Suppression de $(NAME)... <<<<<"
	@echo " "
	$(RM) $(NAME)
	@echo " "
	@echo ">>>>> Suppression terminée. <<<<<"
	@echo " "

# Recompile tout depuis le début
re: fclean all

# **************************************************************************** #
#                                 UTILITAIRES                                  #
# **************************************************************************** #

# Indique que ces règles ne correspondent pas à des fichiers
.PHONY: all clean fclean re bonus
