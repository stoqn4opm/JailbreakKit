//
//  disable_debug_advanced.h
//  HN4ZHNjZHNhY
//
//  Created by Stoyan Stoyanov on 07/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#ifndef disable_debug_advanced_h
#define disable_debug_advanced_h

#include <stdio.h>


/**
 Original name: `disable_gdb_advanced()`
 
 This function makes the process deny the attaching request by debugers by
 simulating what is already available on macOS:
 
 ptrace(PT_DENY_ATTACH, 0, 0, 0);
 
 by implementing it directly in assembly language.
 
 This method of disabling debugers is well known to attackers but there is nothing they can do to easily bypass it
 because it is a part of the kernel memory space.
 
 Please note that this will make XCode not being able to attach its debuger to the process too,
 so run it only in release builds.
 
 source: https://iphonedevwiki.net/index.php/Crack_prevention#PT_DENY_ATTACH
 */
void mRiYXNnZnZmZGF2Ym(void) __attribute__((always_inline));

#endif /* disable_debug_advanced_h */
