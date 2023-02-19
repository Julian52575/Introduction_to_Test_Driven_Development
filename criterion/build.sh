#!/bin/bash

gcc ../src/error.c ../src/print.c *.c ../lib/my/*.c -lcriterion -W -Wall -Wextra -Werror -L../include -o unit_test

./unit_test

