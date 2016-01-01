CC = g++

INC	= -I-I/usr/include/mysql
OPT = -Wall -Who-deprecated -g

LDFLAGS = -L/usr/lib/mysql
LIBS = -lmysqlclient -lz -lm

OBJS = base.o

EXEC = base

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC)	$(OPT) -o $@ $(OBJS) $(LINKER_PATH) $(LINKER)

base.o: base.cpp
	$(CC) $(INC) $(OPT) -c $@ $<


clean:
	rm -f $(OBJS) $(EXEC)