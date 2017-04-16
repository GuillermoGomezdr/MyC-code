CC = g++
IDIR = ../include
DDIR = ../dist

CFLAGS = -g -I$(IDIR)

DEPS = $(wildcard $(IDIR)/*.h)
OBJS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

4raya: $(OBJS)
	$(CC) -o 4raya $(CFLAGS) $^

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

.PHONY: clean dist

clean:
	$(RM) *.o

dist: 4raya clean
	mv 4raya $(DDIR)
