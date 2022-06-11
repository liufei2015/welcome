total=test.cpp bigdatadd.cpp

learn:$(total)
	g++ $(total) -g -o learn

release:test.cpp bigdatadd.cpp
	g++ $(total) -o learn

run:
	./learn

debug:
	gdb ./learn
