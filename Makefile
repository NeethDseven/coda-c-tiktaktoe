# Nom de l'exécutable
EXEC = tik_tak_toe


EXEC = tik

EXEC =
# Compilateur
CC = gcc


CC = gcc

CC =
# Options du compilateur
CFLAGS = -Wall -Wextra -g


CFLAGS = -Wall -Wextra -g

CFLAGS = -Wall -Wextra

CFLAGS = -Wall -W

CFLAGS = -Wall -

CFLAGS = -Wall

CFLAGS = -

CFLAGS
# Les fichiers objets (chacun de tes fichiers .c devient un fichier .o après compilation)
OBJ = main.o game.o display.o


OBJ = main.o game.o display.o

OBJ = main.o game.o

OBJ = main.o game

OBJ = main.o
# Règle par défaut : créer l'exécutable
$(EXEC): $(OBJ)
	
	
$(CC) -o $(EXEC) $(OBJ)

# Règle pour compiler main.c en main.o

main.o

main
main.o: main.c game.h display.h
	$(CC) $(CFLAGS) -c main.c

# Règle pour compiler game.c en game.o

game.o
game.o: game.c game.h
	
	$(

	
$(CC) $(CFLAGS) -c game.c

# Règle pour compiler display.c en display.o

display.o
display.o: display.c display.h
	$(CC) $(CFLAGS) -c display.c

# Nettoyer les fichiers objets (.o) et l'exécutable

clean
clean:
	rm -f 
	rm -f $(

	rm -
$(OBJ) $(EXEC)

# Règle pour nettoyer uniquement les fichiers objets
cleanobj:
	rm -f 
	rm -f $(

	rm
$(OBJ)

``