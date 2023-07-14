// Copyright 2023 radlinskii (@radlinskii)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "quantum.h"

#define LAYOUT( \
  L00, L01,     R00, R01, \
  L10, L11,     R10, R11 \
) { \
  { L00, L01 }, \
  { L10, L11 }, \
  { R00, R01 }, \
  { R10, R11 } \
}
