CC = g++

INC	= -I-I/usr/include/mysql
OPT = -Wall -g

LDFLAGS = -L/usr/lib/mysql
LIBS = -lmysqlclient -lz -lm

OBJS = base.o

EXEC = base

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC)	$(OPT) -o $@ $^ $(INC) $(LDFLAGS) $(LIBS)


clean:
	rm -f $(OBJS) $(EXEC)