#include <stdio.h>
#include <stdlib.h>
#include "bitmap.h"


void bitmap_free_internal(bitmap_t *bitmap) {
    if (!bitmap || !bitmap->bits) {
        return;
    }
    free(bitmap->bits);
}

void bitmap_free(bitmap_t *bitmap) {
    if (!bitmap || !bitmap->bits) {
        return; // Prevent crashing on NULL pointer
    }
    free(bitmap->bits);
    free(bitmap);
}

void bitmap_reset(bitmap_t *bitmap) {
    if (!bitmap || !bitmap->bits) {
        return; // Prevent crashing on NULL pointer
    }

    bitmap->next = 0;  // Reset allocation index

    // Calculate the correct number of bytes to clear
    uint16_t num_bytes = ((bitmap->tsize + 31) / 32) * sizeof(uint32_t);
    memset(bitmap->bits, 0, num_bytes);
}
