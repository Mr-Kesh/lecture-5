CXX = g++

CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

# This is the default task, it builds the test program
all: test

# This creates the program called "test"
# It needs test.o and functions_to_implement.o to build
test: test.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.o functions_to_implement.o -o test

# This compiles functions_to_implement.cpp into functions_to_implement.o
functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# This compiles test.cpp into test.o
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

# This cleans up the folder by removing .o files and the "test" program
clean:
	rm -f test.o functions_to_implement.o test
