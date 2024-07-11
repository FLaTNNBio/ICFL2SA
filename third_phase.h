#include <iostream>
#include "generic_vector.h"
#include "custom_suffix_tree.h"
#include <string.h>
#include <vector>
#include "second_phase.h"

using namespace std;


int_vector* find_common_elements_with_quick_sort(int_vector* x,int_vector* y);
int_vector* find_common_elements(int_vector* x,int_vector* y);
int_vector* common_prefix_merge(int_vector* x,int_vector* y);
int_vector* get_common_prefix_merge(suffix_tree_node* root);
int_vector* get_common_prefix_merge_2(suffix_tree_node* root);
int_vector* common_prefix_merge_2(int_vector* x, suffix_tree_node* node1,int_vector* y, suffix_tree_node* node2);
int_vector* find_common_elements_2(suffix_tree_node* x,suffix_tree_node* y);
int_vector* common_prefix_merge_3(int_vector* x,int_vector* y, int_vector*common_elements);
void common_prefix_merge_4_multithreading(int_vector* x,int_vector* y, int_vector*common_elements,int_vector** res);
common_elements_vector* common_prefix_merge_with_common_elements_vector(int_vector* chain1,int_vector* common1,int_vector* chain2,int_vector* common2, int_vector*common_elements);
int_vector* get_common_prefix_merge_3(suffix_tree_node* root);
int_vector* get_common_prefix_merge_4(suffix_tree_node* root);
void get_common_prefix_merge_4_multihreading(suffix_tree_node* root,int_vector** res);
common_elements_vector* get_common_prefix_merge_5(suffix_tree_node* root);