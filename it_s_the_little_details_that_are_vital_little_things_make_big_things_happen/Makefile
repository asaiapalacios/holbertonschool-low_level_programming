all: libholbertonschool.a

SOURCES=0-absolute.c 0-contact_strings.c 0-first_digit.c 0-lowercase.c 0-print_number.c 0-uppercase_string.c 1-cap_string.c 1-nconcat_strings.c 1-power.c 1-swap_int.c 1-uppercase.c 2-print_array.c 2-square_root.c 2-str_len.c 2-string_copy.c 3-is_prime_number.c 3-print_string.c 3-string_ncopy.c 4-positive_or_not.c 4-reverse_string.c 4-strings_compare.c 5-reverse_array.c 5-string_to_integer.c

OBJECTS=0-absolute.o 0-contact_strings.o 0-first_digit.o 0-lowercase.o 0-print_number.o 0-uppercase_string.o 1-cap_string.o 1-nconcat_strings.o 1-power.o 1-swap_int.o 1-uppercase.o 2-print_array.o 2-square_root.o 2-str_len.o 2-string_copy.o 3-is_prime_number.o 3-print_string.o 3-string_ncopy.o 4-positive_or_not.o 4-reverse_string.o 4-strings_compare.o 5-reverse_array.o 5-string_to_integer.o

libholbertonschool.a: ./src/0-absolute.o ./src/0-contact_strings.o ./src/0-first_digit.o./src/0-lowercase.o ./src/0-print_number.o ./src/0-uppercase_string.o ./src/1-cap_string.o ./src/1-nconcat_strings.o ./src/1-power.o ./src/1-swap_int.o ./src/1-uppercase.o ./src/2-print_array.o ./src/2-square_root.o ./src/2-str_len.o ./src/2-string_copy.o ./src/3-is_prime_number.o ./src/3-print_string.o ./src/3-string_ncopy.o ./src/4-positive_or_not.o ./src/4-reverse_string.o ./src/4-strings_compare.o ./src/5-reverse_array.o ./src/5-string_to_integer.o
	ar -rc libholbertonschool.a ./src/0-absolute.o ./src/0-contact_strings.o ./src/0-first_digit.o ./src/0-lowercase.o ./src/0-print_number.o ./src/0-uppercase_string.o ./src/1-cap_string.o ./src/1-nconcat_strings.o ./src/1-power.o ./src/1-swap_int.o ./src/1-uppercase.o ./src/2-print_array.o ./src/2-square_root.o ./src/2-str_len.o ./src/2-string_copy.o ./src/3-is_prime_number.o ./src/3-print_string.o ./src/3-string_ncopy.o ./src/4-positive_or_not.o ./src/4-reverse_string.o ./src/4-strings_compare.o ./src/5-reverse_array.o ./src/5-string_to_integer.o

0-absolute.o: 0-absolute.c
	gcc -c 0-absolute.c

0-contact_strings.o: 0-contact_strings.c
	gcc -c 0-contact_strings.c

0-first_digit.o: 0-first_digit.c
	gcc -c 0-first_digit.c

0-lowercase.o: 0-lowercase.c
	gcc -c 0-lowercase.c

0-print_number.o: 0-print_number.c
	gcc -c 0-print_number.c

0-uppercase_string.o: 0-uppercase_string.c
	gcc -c 0-uppercase_string.c

1-cap_string.o: 1-cap_string.c
	gcc -c 1-cap_string.c

1-nconcat_strings.o: 1-nconcat_strings.c
	gcc -c 1-nconcat_strings.c

1-power.o: 1-power.c
	gcc -c 1-power.c

1-swap_int.o: 1-swap_int.c
	gcc -c 1-swap_int.c

1-uppercase.o: 1-uppercase.c
	gcc -c 1-uppercase.c

2-print_array.o: 2-print_array.c
	gcc -c 2-print_array.c 

2-square_root.o: 2-square_root.c
	gcc -c 2-square_root.c

2-str_len.o: 2-str_len.c
	gcc -c 2-str_len.c

2-string_copy.o: 2-string_copy.c
	gcc -c 2-string_copy.c

3-is_prime_number.o: 3-is_prime_number.c
	gcc -c 3-is_prime_number.c

3-print_string.o: 3-print_string.c
	gcc -c 3-print_string.c

3-string_ncopy.o: 3-string_ncopy.c
	gcc -c 3-string_ncopy.c

4-positive_or_not.o: 4-positive_or_not.c
	gcc -c 4-positive_or_not.c

4-reverse_string.o: 4-reverse_string.c
	gcc -c 4-reverse_string.c

4-strings_compare.o: 4-strings_compare.c
	gcc -c 4-strings_compare.c

5-reverse_array.o: 5-reverse_array.c
	gcc -c 5-reverse_array.c

5-string_to_integer.o: 5-string_to_integer.c
	gcc -c 5-string_to_integer.c

clean:
	rm $(OBJECTS)

re:
	all clean