//
//  disable_debug_simple.h
//  HN4ZHNjZHNhY
//
//  Created by Stoyan Stoyanov on 07/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#ifndef disable_debug_simple_h
#define disable_debug_simple_h

#include <stdio.h>

/**
 Original name: `disable_gdb_simple()`
 
 This function makes the process deny the attaching request by debugers by
 simulating what is already available on macOS:
 
 ptrace(PT_DENY_ATTACH, 0, 0, 0);
 
 This method of disabling debugers is well known to attackers and pretty much every
 tool for reverse engineering can bypass it.
 
 It will only stop the most unexperienced attackers, who are just trying to attach to the process.
 Please note that this will make XCode not being able to attach its debuger to the process too,
 so run it only in release builds.
 */
void eXR1bXlkICB2ZGZ2ZGZ2(void) __attribute__((always_inline)); // void disable_gdb_simple()

#endif /* disable_debug_simple_h */
