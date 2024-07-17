CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC_DIR = src
INCLUDE_DIR = include
TEST_DIR = tests

SRC = $(SRC_DIR)/windows.c $(SRC_DIR)/map.c $(SRC_DIR)/filter.c $(SRC_DIR)/reduce.c $(SRC_DIR)/find.c
TEST_SRC = $(TEST_DIR)/test_utils.c
OBJS = $(SRC:.c=.o)

LIB_NAME = libparibhasa.a
TEST_NAME = test

all: $(LIB_NAME) $(TEST_NAME)

$(LIB_NAME): $(OBJS)
	ar rcs $@ $^

$(TEST_NAME): $(OBJS) $(TEST_SRC)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(TEST_SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_NAME) $(LIB_NAME)

.PHONY: all clean
