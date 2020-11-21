#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void 
set_bit( char bit_array[], unsigned bit_number )
{
    bit_array[bit_number] = 1;
}

void
clear_bit( char bit_array[], unsigned bit_number )
{
    bit_array[bit_number] = 0;
}

void
assign_bit( char bit_array[], unsigned bit_number, int value )
{
    bit_array[bit_number] = value ? 1 : 0;
}

int 
test_bit( char bit_array[], unsigned bit_number )
{
    return bit_array[bit_number];
}

int
main( void ) 
{
    const int NUM_BITS = 64;
    char bit_array[NUM_BITS];
    int curr_bit = 17;

    set_bit( bit_array, curr_bit );
    printf( "bit %d: %d\n", curr_bit, test_bit( bit_array, curr_bit ) );

    clear_bit( bit_array, curr_bit );
    printf( "bit %d: %d\n", curr_bit, test_bit( bit_array, curr_bit ) );

    assign_bit( bit_array, curr_bit, 19 );
    printf( "bit %d: %d\n", curr_bit, test_bit( bit_array, curr_bit ) );

    assign_bit( bit_array, curr_bit, 0 );
    printf( "bit %d: %d\n", curr_bit, test_bit( bit_array, curr_bit ) );

    printf( "\nSequence should be: 1, 0, 1, 0\n" );

    return EXIT_SUCCESS;
}

