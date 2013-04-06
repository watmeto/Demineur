CC = cc
LIB = -lSDL -lSDLmain -lSDL -lSDL_image -lSDL_ttf 
OUT = Demineur
SRC = *.c
all:
	$(CC) $(SRC) $(LIB) -o $(OUT)

l: all
	./$(OUT)
