all: calc

compile: compiler
	./compiler

parser.tab.c parser.tab.h:	parser.y
	bison -t -v -d parser.y

lex.yy.c: lekser.l parser.tab.h
	flex lekser.l

calc: lex.yy.c parser.tab.c parser.tab.h
	gcc parser.tab.c lex.yy.c -o compiler

clean:
	rm compiler parser.tab.c lex.yy.c parser.tab.h parser.output
