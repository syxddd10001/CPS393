c1Labq02: c1Labq01F.o c1Labq01M.o
	gcc c1Labq01F.c c1Labq01M.c -o c1Labq02
c1Lab01F.o: c1Labq01F.c c1Labq01F.h
	gcc -c c1Labq01F.c
c1Lab01M.o: c1Labq01M.c
	gcc -c c1Labq01M.c
clean:
	rm *.o
veryclean: clean
	rm c1Labq02

.PHONY: clean
