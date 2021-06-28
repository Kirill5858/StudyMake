# Усложненный make-file.  Введены переменные для параметров компиляции и исполняемых файлов

.PHONY: all debug release clean

RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS   = -g -O0 -Wall
RELEASE_EXEC  = Kazino-Royal
DEBUG_EXEC    = Kazino-Royal-dbg
#SOURCE        =Kazino-Royal

all: debug release

debug: $(DEBUG_EXEC)

hello-dbg: Kazino-Royal.cpp
	g++ $(DEBUG_FLAGS) Kazino-Royal.cpp -o $(DEBUG_EXEC) 

release: $(RELEASE_EXEC)

hello: Kazino-Royal.cpp
	g++ $(RELEASE_FLAGS) Kazino-Royal.cpp -o $(RELEASE_EXEC)

clean:
	rm -f $(RELEASE_EXEC) $(DEBUG_EXEC)

