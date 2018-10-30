# Directories where files are stored
IDIR=include
LDIR=lib
SDIR=code
ODIR=obj

# compiler, flag, libraries to include, target executable
CC=g++
FLAGS=-I$(IDIR)	 -Wall -g
LIBS=-lm
TARGET=Jack



# use patsubst so that OBJ = obj/main.o
_OBJ = main.o # other objects
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))



all:$(TARGET)



# Build TARGET
$(TARGET): $(OBJ)



# Compile object files
$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(FLAGS)



# Compile executable
$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(FLAGS) $(LIBS)






# Phony rule to block clean from make use
.PHONY: clean



# Clean object files, core, and executable
clean:
	rm -f $(ODIR)/* *~ core $(TARGET)
