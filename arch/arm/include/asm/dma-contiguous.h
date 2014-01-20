#ifndef ASMARM_DMA_CONTIGUOUS_H
#define ASMARM_DMA_CONTIGUOUS_H

#ifdef __KERNEL__
<<<<<<< HEAD
#ifdef CONFIG_CMA

#include <linux/types.h>
#include <asm-generic/dma-contiguous.h>
=======
#ifdef CONFIG_DMA_CMA

#include <linux/types.h>
>>>>>>> d8ec26d7f8287f5788a494f56e8814210f0e64be

void dma_contiguous_early_fixup(phys_addr_t base, unsigned long size);

#endif
#endif

#endif
