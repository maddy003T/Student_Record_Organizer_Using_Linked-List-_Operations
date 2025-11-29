student: p1.o add_end.o stud_show.o stud_del.o stud_mod1.o stud_save.o stud_exit.o stud_reverse.o stud_sort.o stud_delet.o
	cc p1.c add_end.c stud_show.c stud_del.c stud_mod1.c stud_save.c stud_exit.c stud_reverse.c stud_sort.c stud_delet.c -o student
p1.o: p1.c
	cc -c p1.c
add_end.o: add_end.c
	cc -c add_end.c
stud_show.o: stud_show.c
	cc -c stud_show.c
stud_del.o: stud_del.c
	cc -c stud_del.c
stud_mod1.o: stud_mod1.c
	cc -c stud_mod1.c
stud_save.o: stud_save.c
	cc -c stud_save.c
stud_exit.o: stud_exit.c
	cc -c stud_exit.c
stud_reverse.o: stud_reverse.c
	cc -c stud_reverse.c
stud_sort.o: stud_sort.c
	cc -c stud_sort.c
stud_delet.o: stud_delet.c
	cc -c stud_delet.c
