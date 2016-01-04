CC = g++
OPT = -Wall -g

INC = -I/usr/include
LDFLAGS = -L/usr/lib
LBS = -ljson_linux-gcc-4.9.2_libmt

OBJS = base_pra.o

EXEC = base_pra


all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OPT) -o $@ $(OBJS) $(LDFLAGS)  $(LBS)

 base_pra.o:  base_pra.cpp
	$(CC) $(INC) $(OPT) -c -o $@ $<

clean:
	rm -f $(EXEC) $(OBJS) *.o