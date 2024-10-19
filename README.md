<img src="https://i.imgur.com/KqgSnxU.png"/>

---

[![wakatime](https://wakatime.com/badge/github/eliamd/42_libft.svg)](https://wakatime.com/badge/github/eliamd/42_libft)

## Description

`libft` est un projet de la piscine 42 qui consiste à recréer une bibliothèque standard en C avec un ensemble de fonctions fréquemment utilisées en programmation. L'objectif est de développer une compréhension approfondie des fonctions de manipulation de chaînes, de mémoire et de gestion des caractères, qui sont largement utilisées dans le développement de logiciels.

## Compilation

Pour compiler la bibliothèque `libft.a`, tu peux utiliser le `Makefile` fourni. Il suffit d'exécuter la commande suivante :

```bash
make
```

Cela générera un fichier `libft.a` qui pourra être inclus dans vos projets C.

## Fonctionnalités

### Fonctions de gestion de chaînes

- **ft_strlen** : Retourne la longueur d'une chaîne de caractères.
- **ft_strlcpy** : Copie une chaîne de caractères en respectant une taille maximum.
- **ft_strlcat** : Concatène deux chaînes de caractères avec gestion de la taille maximale.

### Fonctions de gestion de la mémoire

- **ft_memset** : Remplit une zone mémoire avec une valeur donnée.
- **ft_bzero** : Met une zone mémoire à 0.
- **ft_memcpy** : Copie des octets d'une zone mémoire à une autre.
- **ft_memmove** : Copie des octets d'une zone mémoire à une autre en gérant le chevauchement.

### Fonctions de vérification de caractères

- **ft_isalpha** : Vérifie si un caractère est alphabétique.
- **ft_isdigit** : Vérifie si un caractère est numérique.
- **ft_isalnum** : Vérifie si un caractère est alphanumérique.
- **ft_isascii** : Vérifie si un caractère fait partie de la table ASCII.
- **ft_isprint** : Vérifie si un caractère est imprimable.

### Conversion

- **ft_atoi** : Convertit une chaîne de caractères en entier.

## Utilisation

Après avoir compilé la bibliothèque, vous pouvez l'utiliser dans vos projets en incluant le fichier `libft.h` dans vos fichiers C :

```c
#include "libft.h"
```

Ensuite, vous pouvez lier la bibliothèque lors de la compilation de votre programme :

```bash
gcc -Wall -Werror -Wextra main.c -L. -lft -o my_program
```

Cela va lier la bibliothèque `libft.a` à votre programme.
