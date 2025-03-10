CC = gcc
CFLAGS = -Wall -g
LDLIBS = -lm

BINS = mainForks mainForks2

all: $(BINS)

mainForks: mainForks.o
mainForks.o: mainForks.c

mainForks2: mainForks2.o
mainForks2.o: mainForks2.c

clean: 
	$(RM) $(BINS) *.o
