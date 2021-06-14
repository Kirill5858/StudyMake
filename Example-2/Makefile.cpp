# ”сложненный make - file.¬ведены переменные дл€ параметров компил€ции и исполн€емых файлов
.PHONY: all debug release clean
RELEASE_FLAGS = -O2 - Wall - DNDEBUG
DEBUG_FLAGS = -g - O0 - Wall
RELEASE_EXEC = hello
DEBUG_EXEC = hello - dbg
TMP = hello.cpp
all : debug release
debug : $(DEBUG_EXEC)
hello - dbg : $(TMP)
g++ $(DEBUG_FLAGS)  $(TMP) - o $(DEBUG_EXEC)
release : $(RELEASE_EXEC)
hello : $(TMP)
g++ $(RELEASE_FLAGS)  $(TMP) - o $(RELEASE_EXEC)
clean :
	rm - f $(RELEASE_EXEC) $(DEBUG_EXEC)