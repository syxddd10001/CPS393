
CC = gcc

glob:		globMain.o glob1.o glob2.o
	${CC} -o glob globMain.o glob1.o glob2.o
globMain.o:	globFuncs.h globVars.h globMain.c
#	${CC} -c globMain.c  #default, so not even necessary
glob1.o:	globFuncs.h globVars.h glob1.c
#	${CC} -c glob1.c  #default, so not even necessary
glob2.o:	globFuncs.h globVars.h glob2.c
#	${CC} -c glob2.c  #default, sonot even necessary
clean:
	rm -f glob globMain.o glob[12].o 
