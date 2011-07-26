build:
	gcc -c masstransit.c -o masstransit.o -fPIC
	gcc *.o -shared -o libmt.so
	gcc -bundle -o libmt.dylib masstransit.c

clean:
	rm -f *.o *.so 
	rm -f *.dylib

build-test: build
	./masstransit 1 2
