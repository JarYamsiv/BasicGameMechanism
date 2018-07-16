CC = g++
GDB = -g
OBJS = objects/main.o objects/core.o
LIBS = -lGL -lGLU -lglut

a.out : ${OBJS}
	${CC} ${GDB} ${OBJS} ${LIBS}

objects/main.o: main.cpp
	${CC} -c main.cpp -o objects/main.o

objects/core.o: core.cpp
	${CC} -c core.cpp -o objects/core.o

clean:
	\rm a.out *.o *.dot