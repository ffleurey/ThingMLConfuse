CC = cc
LIBS = -lpthread -l confuse
CFLAGS = -O2 -w
SRCS = Configurable.c Test_cfg.c runtime.c
OBJS = Configurable.o Test_cfg.o runtime.o

all : Test

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

Test : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ Test
