%: force
	gcc $@.c -o $@
	./$@

force: ;
