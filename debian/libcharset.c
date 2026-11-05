/*
 * SPDX-License-Identifier: BSD-2-Clause
 * Copyright (c) 2026 The Blueberry Pie OS Authors
 */

#include <libcharset.h>

const char *
locale_charset(void)
{
	return "UTF-8";
}

void
libcharset_set_relocation_prefix(const char *orig_prefix, const char *curr_prefix)
{
	(void)orig_prefix;
	(void)curr_prefix;
}
