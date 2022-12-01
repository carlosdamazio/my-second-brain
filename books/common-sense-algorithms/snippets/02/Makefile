CXX_FLAGS  := -Wall -Werror -pedantic -std=c++11
SRC        := $(wildcard *.cpp)
OBJS       := $(patsubst %.cpp,%.o,$(SRC))
BUILD_PATH := build

all: build

build: $(OBJS)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) $? -o $(BUILD_PATH)/$@

