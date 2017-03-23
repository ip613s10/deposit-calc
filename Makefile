.PHONY: clean
deposit-calc: calc2.c
	gcc -Wall calc2.c -o deposit-calc
clean:
	rm -rf deposit-calc a.out *~ .gitignore~
