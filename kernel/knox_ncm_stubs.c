// SPDX-License-Identifier: GPL-2.0
/*
 * Stub implementations for Samsung KNOX NCM symbols.
 * Needed when CONFIG_KNOX_NCM is disabled but some net code still references them.
 */

#include <linux/types.h>

/*
 * Keep signatures simple and compatible with common Samsung trees.
 * (If your tree provides prototypes in a header, include it instead and match exactly.)
 */
unsigned int check_ncm_flag(void)
{
	return 0;
}

unsigned int check_intermediate_flag(void)
{
	return 0;
}

unsigned int get_intermediate_timeout(void)
{
	return 0;
}

/* Some trees pass a conntrack pointer here; we accept void* to avoid header dependency. */
void knox_collect_conntrack_data(void *ct)
{
	(void)ct;
}
