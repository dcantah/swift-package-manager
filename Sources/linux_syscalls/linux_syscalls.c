//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift open source project
//
// Copyright (c) 2025 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#ifdef __linux__

#include <unistd.h>
#include "include/linux_syscalls.h"

int _close_range(unsigned int first, unsigned int last, int flags) {
    const long SYS_close_range = 436;

    return syscall(SYS_close_range, first, last, flags);
}

#endif
