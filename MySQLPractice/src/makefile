CC = g++

INC	= -I-I/usr/include/mysql
OPT = -Wall -g

LDFLAGS = -L/usr/lib/mysql
LIBS = -lmysqlclient -lz -lm

OBJS = base.o

EXEC = base

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC)	$(OPT) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)

base.o: base.cpp
	$(CC) $(INC) $(OPT) -c $@ $<


clean:
	rm -f $(OBJS) $(EXEC)