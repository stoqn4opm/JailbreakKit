//
//  disable_debug_advanced.c
//  HN4ZHNjZHNhY
//
//  Created by Stoyan Stoyanov on 07/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#include "disable_debug_advanced.h"

void mRiYXNnZnZmZGF2Ym() {
    
    // No Need to encode these strings, because they will be directly compiled, they are not going to be present in the 'DATA' segment of the binary.
    __asm (
           "mov r0, #31\n" // set #define PT_DENY_ATTACH (31) to r0
           "mov r1, #0\n"   // clear r1
           "mov r2, #0\n"   // clear r2
           "mov r3, #0\n"   // clear r3
           "mov ip, #26\n"  // set the instruction pointer to syscal 26
           "svc #0x80\n"    // SVC (formerly SWI) generates a supervisor call. Supervisor calls are normally used to request privileged operations or access to system resources from an operating system
           );
}
