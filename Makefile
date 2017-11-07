CC = gcc
CFLAGS = -g
PROG = ReadWriteObjects
SRC = .

.PHONY : all clean cleanall tests

all : $(PROG)

$(PROG) : main.o
	$(CC) $(CFLAGS) -o $(PROG) main.o

main.o : $(SRC)/main.c
	$(CC) $(CFLAGS) -c $(SRC)/main.c

clean :
	-rm -f *.o
# -f prevents the displaying of "file not found" error

cleanall : clean
	-rm -f $(PROG)

tests :
	echo "Tests not yet implemented"
