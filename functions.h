#include "types.h"

u_int stringToUint(str a);

int rdtsc();

int rand_between(int a, int b);

int stringToInt(str a);

LL stringToLL(str a);

void print_vec(strp_vec vec, char_name_vec cvec);

void writeInsert(txt_file& file, str_vec t);

void write_multiple(txt_file& file, read_file& file2, str_vec t);

int findInArray(char to_be_found, char* to_look, int size);

str updateRow(str temp, uint_vec position, str_vec values);
