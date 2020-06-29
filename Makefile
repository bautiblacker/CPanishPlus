all:
	cd ./Compiler; \
	yacc -d yacc.y; \
	lex lex.l; \
	gcc -o ../cpanish++ y.tab.c lex.yy.c node.c operations.c compiler.c

clean:
	rm -f cpanish++; \
	cd ./Compiler; \
	rm -f lex.yy.c; \
	rm -f y.tab.c; \
	rm -f y.tab.h;

examples: listas queues mapa scope triangulodepascal modulo operacionesencompilacion

listas:
	./cpanish++ Examples/Listas -o ejemploListas

colas:
	./cpanish++ Examples/Colas -o ejemploColas

# mapa:
# 	./cpanish++ Examples/Mapa -o ejemploMapa

# scope:
# 	./cpanish++ Examples/Scope -o ejemploScope

# triangulodepascal:
# 	./cpanish++ Examples/TrianguloDePascal -o ejemploTrianguloPascal

# modulo:
# 	./cpanish++ Examples/Modulo -o ejemploModulo

# operacionesencompilacion
# 	./cpanish++ Examples/OperacionesEnCompilacion -o ejemploOperacionesEnCompilacion



