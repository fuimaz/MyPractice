CC = g++
OPT = -Wall -g

INC = -I/usr/include/json /usr/lib/libjson_linux-gcc-4.9.2_libmt.a
#LDFLAGS = -L/usr/lib
LDFLAGS =
#LBS = -llibjson_linux-gcc-4.9.2_libmt
LBS =

OBJS = base_pra.o

EXEC = base_pra


all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OPT) -o $@ $(OBJS) $(INC) $(LDFLAGS)  $(LBS)

 base_pra.o:  base_pra.cpp
	$(CC) $(INC) $(OPT) -c -o $@ $<

clean:
	rm -f $(EXEC) $(OBJS) *.o