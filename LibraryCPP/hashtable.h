#include <string>

using namespace std;

#ifndef HASHTABLE_H
#define HASHTABLE_H

const int p = 13;
const int k = 1;

enum class states
{
	empty,
	occupied,
	empty_for_search,
};

void alg_hash(unsigned int& hash, const string key, const unsigned int M);

unsigned int create_hash(const string key, const unsigned int M, int i);

struct HT_item;

HT_item* create_table(const unsigned int M);

void table_delete(HT_item* table);

string get_key(HT_item* table, const unsigned int i);

string get_value(HT_item* table, const unsigned int i);

states get_state(HT_item* table, const unsigned int i);

void set_key(HT_item* table, const unsigned int i, const string key);

void set_value(HT_item* table, const unsigned int i, const string value);

void set_state(HT_item* table, const unsigned int i, states state);

#endif