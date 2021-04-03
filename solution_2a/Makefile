# comments

#Target : dependancy
#<TAB>Command

var=output.exe
src =src\open.c src\read.c src\free.c src\sort.c main.c inc\header.h
src_test=test_unity\test.c test_unity\unity.c test_unity\unity.h test_unity\unity_internals.h
INC_var=inc
$(var):$(src)
	gcc $(src) -I$(INC_var) -o $(var)

run:$(var)
	$(var)

static_check:
	cppcheck --enable=all src/ .c inc/ .c

runtest:
	gcc -I$(INC_var) -I test_unity $(src_test) $(src) -o test_result
	


clean:
	del /q *.exe
