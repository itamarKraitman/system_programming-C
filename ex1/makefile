PROG = loops recursives recursived loopd mains maindloop maindrec
LIBS = libclassloops.a libclassrec.a libclassrec.so libclassloops.so
CC = gcc
FLAGS = -Wall -g
AR = ar

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

#for mains
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
#for loops
libclassloops.a: basicClassification.o advancedClassificationLoop.o
			$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
basicClassification.o:  basicClassification.c NumClass.h
			$(CC) $(FLAGS) -c basicClassification.c -lm
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
			$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
			$(CC) -c advancedClassificationRecursion.c NumClass.h -lm
#for recursives
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
			$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
#for recursived
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
			$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
#for looped
libclassloops.so: basicClassification.o advancedClassificationLoop.o
			$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

.PHONY: clean all

all: $(PROG) 
clean: 
	rm -f *.o *.a *.so $(PROG)