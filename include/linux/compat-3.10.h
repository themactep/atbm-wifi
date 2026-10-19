#ifndef LINUX_3_10_COMPAT_H
#define LINUX_3_10_COMPAT_H

#include <linux/version.h>
#if (LINUX_VERSION_CODE < KERNEL_VERSION(3,10,0))
#define prandom_u32 random32
#elif (LINUX_VERSION_CODE >= KERNEL_VERSION(6,10,0))
/* prandom_u32()/random32() were removed in 6.10. */
#define prandom_u32 get_random_u32
#endif /* LINUX_3_10_COMPAT_H */
#endif
