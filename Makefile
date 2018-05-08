a.out: ckit.c test.c
	gcc -Wall -pthread $^ -o $@

clean:
	rm -f a.out
