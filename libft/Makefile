TARGET=test_file
CXX=gcc
LD=gcc
WARN=-Wall -Werror -Wextra
OBJS=test/test.c lib/*.c
test_file:$(OBJS)
	$(LD) $(WARN) -o $(TARGET) $(OBJS)