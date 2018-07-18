CC = g++
GDB = -g
OBJS = objects/main.o objects/core.o objects/player.o
LIBS = -lGL -lGLU -lglut

a.out : ${OBJS}
	${CC} ${GDB} ${OBJS} ${LIBS} -o bin/main.out

objects/main.o: main.cpp headers/core.h
	${CC} -c main.cpp -o objects/main.o

objects/core.o: core.cpp headers/core.h
	${CC} -c core.cpp -o objects/core.o

objects/player.o: cppFiles/player.cpp headers/player.h
	${CC} -c cppFiles/player.cpp -o objects/player.o

clean:
	\rm a.out *.o *.dot
