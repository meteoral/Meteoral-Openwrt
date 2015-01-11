#ifndef _OX820_INC_
#define _OX820_INC_

#ifndef SDK_BUILD_NAND_STAGE1_BLOCK
#define SDK_BUILD_NAND_STAGE1_BLOCK	0
#endif

#ifndef SDK_BUILD_NAND_STAGE1_BLOCK2
#define SDK_BUILD_NAND_STAGE1_BLOCK2	1
#endif

#ifndef SDK_BUILD_NAND_STAGE2_BLOCK
#define SDK_BUILD_NAND_STAGE2_BLOCK	2
#endif

#ifndef SDK_BUILD_NAND_STAGE2_BLOCK2
#define SDK_BUILD_NAND_STAGE2_BLOCK2	8
#endif

#ifndef SDK_BUILD_NAND_KERNEL_BLOCK
#define SDK_BUILD_NAND_KERNEL_BLOCK	16
#endif

#ifndef SDK_BUILD_NAND_KERNEL_BLOCK2
#define SDK_BUILD_NAND_KERNEL_BLOCK2	30
#endif

#include <stdint.h>
extern uint8_t	CONFIG_BLOCK_REPLICATION;
extern uint8_t	CONFIG_PAGE_REPLICATION;
extern uint32_t MLC_MAX_IMG_SIZ;

#endif
