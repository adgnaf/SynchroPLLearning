/* This file was generated by lv6 version v6.110.2. */
/*  lv6 assert.lus -n assertExpr -2c */
/* on LAPTOP-B8CFCGII the 27/01/2025 at 21:09:46 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "assert_assertExpr.h"

void _read_pragma(char []);
_boolean _get_bool(char*);
_integer _get_int(char*);
_real _get_real(char*);
void _put_bottom(char*);
void _put_bool(char*, _boolean);
void _put_int(char*, _integer);
void _put_real(char*, _real);
void _put_string(char*, char*);

/* Print a promt ? ************************/
static int ISATTY;
    
/* I/O functions for the main loop **********************/
void print_rif_declaration();
void get_inputs (_integer *,_integer *);
void print_outputs (_integer );
/* I/O functions end **********************/
