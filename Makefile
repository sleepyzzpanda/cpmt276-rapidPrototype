CC = g++
CFLAGS = -Wall -Wextra -pedantic
SRC = main.cpp helper_funcs.cpp customer.cpp product.cpp changeItem.cpp release.cpp changeRequest.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = prototype.o

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXECUTABLE)
