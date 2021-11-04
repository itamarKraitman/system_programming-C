#PROG = loops recursives recursived loopd mains maindloop maindrec
#LIBS = libclassloops.a libclassrec.a libclassrec.so libclassloops.so
#CC = gcc
#FLAGS = -Wall -g
#AR = ar

#loops: libclassloops.a
#recursives: libclassrec.a
#recursived: libclassrec.so
#loopd: libclassloops.so

#mains: main.o libclassrec.a
#	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm
#maindloop: main.o libclassloops.so
#	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm
#maindrec: main.o libclassrec.so
#	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

#for mains
#main.o: main.c NumClass.h
#	$(CC) $(FLAGS) -c main.c
#for loops
#libclassloops.a: basicClassification.o advancedClassificationLoop.o
#			$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
#basicClassification.o:  basicClassification.c NumClass.h
#			$(CC) $(FLAGS) -c basicClassification.c
#advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
#			$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm
#for recursives
#libclassrec.a: basicClassification.o advancedClassificationRecursion.o
#			$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
#advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
#			$(CC) -c advancedClassificationRecursion.c NumClass.h
#for recursived
#libclassrec.so: basicClassification.o advancedClassificationRecursion.o
#			$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
#for looped
#libclassloops.so: basicClassification.o advancedClassificationLoop.o
#			$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

#PHONY: clean all

#all: $(PROG)
#clean: rm -f  *.o *.a *.so $(PROG)

clean: 
	rm -f *.o *.a *.so $(PROGS_CMD)

all: $(LIBS_CMD) $(PROGS_CMD) 

loops: libclassloops.a
loopd: libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so


mains: main.o libclassrec.a
	gcc $(CFLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc $(CFLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc $(CFLAGS) -o maindrec main.o ./libclassrec.so -lm

libclassrec.a: $(OBJ_RECURSION)
	ar -rcs libclassrec.a $(OBJ_RECURSION)

libclassrec.so: $(OBJ_RECURSION)
	gcc -shared  $(OBJ_RECURSION) -o libclassrec.so

libclassloops.a: $(OBJ_LOOP)
	ar -rcs libclassloops.a $(OBJ_LOOP) 

libclassloops.so: $(OBJ_LOOP)
		gcc -shared  $(OBJ_LOOP) -o libclassloops.so

main.o: main.c NumClass.h
	gcc $(CFLAGS) -c main.c $(MATH)

basicClassification.o: basicClassification.c NumClass.h
	gcc $(CFLAGS) -c basicClassification.c $(MATH)

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc $(CFLAGS) -c advancedClassificationLoop.c $(MATH)

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc $(CFLAGS) -c advancedClassificationRecursion.c $(MATH)