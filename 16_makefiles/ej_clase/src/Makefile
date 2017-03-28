CC = g++
IDIR = ../include
DDIR = .../dist

CFLAGS = -g -I$(IDIR)

DEPS = $(wildcard *.h)
OBJS = $(patsubs %.cpp, %.o, $(wildcard *.cpp))

TARGET = main

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(CFLAGS) $^

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<
# Buscará un .o para .cpp, con $^ indicamos que solo nos pille el primero
# que encuentre, ya solo habrá un .o para cada .cpp

