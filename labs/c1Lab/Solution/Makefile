#remember the TAB before each action
c1Labq02: c1Labq02M.o c1Labq02F.o
	gcc c1Labq02M.o c1Labq02F.o -o c1Labq02
c1Labq02M.o: c1Labq02M.c c1Labq02F.h
	gcc -c c1Labq02M.c
c1Labq02F.o: c1Labq02F.c c1Labq02F.h
	gcc -c c1Labq02F.c
clean:
	rm -f c1Labq02M.o c1Labq02F.o
veryclean:
	rm -f c1Labq02 c1Labq02M.o c1Labq02F.o
