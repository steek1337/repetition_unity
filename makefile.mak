main:
	gcc - o src\main Repo.c Repodekla.c

.PHONY: test
test:
	gcc -o test\test test.c Repodekla.c unity\src\Unity.c
