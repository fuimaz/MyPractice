CC = g++

INC	= -I/usr/include
INC	= 
OPT = -Wall -Wno-deprecated -g

LDFLAGS = -L/usr/lib/mysql
LIBS = -lmysqlclient

OBJS = base_pra.o

EXEC = base_pra

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(OPT) -o $@ $(LDFLAGS) $(LIBS)

base_pra.o: base_pra.cpp
	$(CC) $(INC) $(OPT) -c -o $@ $<

clean:
	rm -f $(OBJS) $(EXEC)