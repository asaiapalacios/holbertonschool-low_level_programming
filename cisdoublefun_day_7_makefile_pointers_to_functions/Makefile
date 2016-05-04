CC=gcc 
CFLAGS=-Wall -Werror -pedantic -Wextra -Iinc -c
SRCS=0-absolute.c 0-first_digit.c 0-lowercase.c 0-print_number.c 0-uppercase_string.c 1-cap_string.c 1-power.c 1-swap_int.c 1-uppercase.c 2-print_array.c 2-square_root.c 2-str_len.c 3-print_string.c 4-positive_or_not.c 4-reverse_string.c 4-strings_compare.c 5-reverse_array.c 5-string_to_integer.c
OBJS=$(SRCS:.c=.o)
VPATH=src

all: libholbertonschool.a

libholbertonschool.a: $(OBJS)
	ar -rc libholbertonschool.a $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean: rm -f $(OBJS)

re: $(OBJS)
