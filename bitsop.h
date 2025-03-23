/* Assuming least significant bit starts from 0th bit*/


#ifndef __BITS__
#define __BITS__


/* Check if the bit at position pos in a integer n is set or not. For example, an integer 5 when represented in binary is 101. For this number, below macro evaluates to true for pos = 0 and 2 and false for pos = 1 */

#define IS_BIT_SET(n, pos) \
	(n & (1 << pos))


The rest of the macros are self-explanatory by their name.


#define TOGGLE_BIT(n, pos) \
	(n ^= (1 << pos))

#define COMPLEMENT8(num) \
	(~(uint8_t)num)

#define COMPLEMENT32(num) \
    	(~(uint32_t)num)

#define COMPLEMENT16(num) \
     	(~(uint16_t)num)

#define COMPLEMENT64(num) \
	(~(uint64_t)num)

#define UNSET_BIT32(n, pos) \
        ((uint32_t)n &= ~(1 << pos))

#define UNSET_BIT64(n, pos) \
	((uint64_t)n &= ~(1 << pos))

#define UNSET_BIT16(n, pos) \
	((uint16_t)n &= ~(1 << pos))

#define UNSET_BIT8(n, pos) \
	((uint8_t)n &= ~(1 << pos))

#define SET_BIT(n, pos) \
	(n |= (1 << pos))


#endif
