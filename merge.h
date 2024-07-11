#include "generic_vector.h"
#include "custom_suffix_tree.h"
#include <vector>
#include <string.h>
#include <iostream>

int_vector* in_prefix_merge(const char* S, vector<int> icfl_list, int_vector* e, int_vector* g);
bit_vector* in_prefix_merge_bit_vector(const char* S, vector<int> icfl_list, int_vector* father, int_vector* child);
bit_vector* in_prefix_merge_bit_vector_2(const char* S, vector<int> icfl_list, int_vector* father, int_vector* child);
bit_vector* in_prefix_merge_bit_vector_3(const char* S, vector<int> icfl_list, int icfl_list_size, int_vector* father, int_vector* child);
common_elements_vector* in_prefix_merge_bit_vector_4(const char* S, vector<int> icfl_list,int icfl_list_size, int_vector* father, int_vector* child);
bit_vector* in_prefix_merge_bit_vector_5(const char* S, vector<int> icfl_list, int icfl_list_size, int_vector* father, int_vector* child);
void in_prefix_merge_bit_vector_8(const char* S, vector<int> icfl_list, int icfl_list_size,int_vector*  father, int child,vector<int> is_custom_suffix,int father_lenght);