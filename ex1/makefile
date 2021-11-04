PROG = loops recursives recursived looped mains maindloop maindrec
LIBS = libclassloops.a libclassrec.a libclassrec.so libclassloops.so
CC = gcc
FLAGS = -wall -g
AR = ar


loops: libclassloops.a
	$(CC) $(FLAGS) -o loops libclassloops.a
recursives: libclassrec.a
	$(CC) $(FLAGS) -o recursives libclassrec.a
recursived: libclassrec.so
	$(CC) $(FLAGS) -o recursived libclassloops.so
loopd: libclassloops.so
	$(CC) $(FLAGS) -o loopd libclassloops.so
mains: main.o libclassrec.a
	$(CC) -o mains main.o -L -libclassrec.a
maindloop: main.o libclassloops.so
	$(CC) -o maindloop main.o -L libclassloops.so
maindrec: main.o libclassrec.so
	$(CC) -o maindrec main.o -L libclassrec.so

#for mains
main.o: main.c
	$(CC) -c main.c
#for loops
libclassloops.a: basicClassification.o advancedClassificationLoop.o
			$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
basicClassification.o:  basicClassification.c numClass.h
			$(CC) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c numClass.h
			$(CC) -c advancedClassificationLoop.c
#for recursives
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
			$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
advancedClassificationRecursion.o: advancedClassificationRecursion.c numClass.h
			$(CC) -c advancedClassificationRecursion.c numClass.h
#for recursived
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
			$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
#for looped
libclassloops.so: basicClassification.o advancedClassificationLoop.o
			$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

PHONY: clean all

all: $(PROG) $(LIBS)
clean: *.o *.a *.so $(PROG)

