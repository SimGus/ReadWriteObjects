CC = gcc
CFLAGS = -g --std=c99
PROG = ReadWriteObjects
SRC = .

.PHONY : all clean cleanall tests

#================== Make program =====================
all : $(PROG)

$(PROG) : main.o $(SRC)/defines.h alloc.o RWObject.o binaryConstant.o
	$(CC) $(CFLAGS) -o $(PROG) main.o alloc.o binaryConstant.o RWObject.o

main.o : $(SRC)/main.c
	$(CC) $(CFLAGS) -c $(SRC)/main.c

#============== Compile "side" functions ===============
alloc.o : $(SRC)/alloc.c $(SRC)/defines.h
	$(CC) $(CFLAGS) -c $(SRC)/alloc.c

binaryConstant.o : $(SRC)/binaryConstant.c
	$(CC) $(CFLAGS) -c $(SRC)/binaryConstant.c

#============= Compile project functions ===============
RWObject.o : $(SRC)/RWObject.c $(SRC)/defines.h binaryConstant.o
	$(CC) $(CFLAGS) -c $(SRC)/RWObject.c

#============= Clean and tests =========================
clean :
	-rm -f *.o
# -f prevents the displaying of "file not found" error

cleanall : clean
	-rm -f $(PROG)

tests :
	echo "Tests not yet implemented"
