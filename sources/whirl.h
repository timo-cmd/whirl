#include <iostream>
#include <vector>
#include <stdio.h>

#ifndef WHIRL_H
#define WHIRL_H
#endif

typedef std::vector<int>  mem_t;
typedef std::vector<bool> prog_t;

mem_t memory;
prog_t program;

mem_t::iterator mem_position;
prog_t::iterator prog_position;
