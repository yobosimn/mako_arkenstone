#ifndef ASMX86_DMA_CONTIGUOUS_H
#define ASMX86_DMA_CONTIGUOUS_H

#ifdef __KERNEL__

#include <linux/types.h>
<<<<<<< HEAD
#include <asm-generic/dma-contiguous.h>
=======
>>>>>>> d8ec26d7f8287f5788a494f56e8814210f0e64be

static inline void
dma_contiguous_early_fixup(phys_addr_t base, unsigned long size) { }

#endif
#endif
