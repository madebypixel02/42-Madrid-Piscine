hello.o: hello.c
	norminette -R CheckForbiddenSourceHeader hello.c
	gcc -Wall -Wextra -Werror hello.c -o hello.o
     
fclean:
	rm -f hello.o