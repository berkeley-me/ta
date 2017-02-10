CC=gcc
CFLAGS=-g #g-> debug; w-> no warnings

objects= main map wc

program: $(objects)

# main: main.c
# 	$(CC) $(CFLAGS) main.c 

# map: map.c
# 	$(CC) $(CFLAGS) map.c 

# wc: wc.c
# 	$(CC) $(CFLAGS) wc.c 

.PHONY: clean

clean:
	rm -f *.o $(objects)
