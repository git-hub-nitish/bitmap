#ifndef __BITMAP__
#define __BITMAP__

typedef struct bitmap_ {
    uint32_t *bits;
    uint16_t tsize;
    uint16_t next;
} bitmap_t;

/* Free the bitmap->bits array */
void bitmap_free_internal(bitmap_t *bitmap);

/* free the bitmap->bits array as well as bitmap itself */
void bitmap_free(bitmap_t *bitmap);

/* Set all bits of bitmap->bits array to 0.  Also set bitmap->next = 0 */
void bitmap_reset(bitmap_t *bitmap) ;

#endif
