CXX := g++
CXXFLAGS := -O0 -g -Wall -std=c++14 -Werror=return-type

# enable asan
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer
LDFLAGS  += -fsanitize=address -fno-omit-frame-pointer

# Disable -Wdelete-non-virtual-dtor warning
# https://stackoverflow.com/questions/43282826/suppress-delete-non-virtual-dtor-warning-when-using-a-protected-non-virtual-dest
CXXFLAGS += -Wno-delete-non-virtual-dtor

test: Rectangle.cpp Triangle.cpp main.cpp
	$(CXX) $(CXXFLAGS) $^ -o main.out
	./main.out

clean:
	rm -f *.out
