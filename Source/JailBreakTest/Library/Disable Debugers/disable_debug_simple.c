//
//  disable_debug_simple.c
//  HN4ZHNjZHNhY
//
//  Created by Stoyan Stoyanov on 07/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#include "disable_debug_simple.h"
#include "b64.h"

#include <dlfcn.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

typedef int (*ptrace_ptr_t)(int _request, pid_t _pid, caddr_t _addr, int _data);
#if !defined(PT_DENY_ATTACH)
#define PT_DENY_ATTACH 31
#endif  // !defined(PT_DENY_ATTACH)

void eXR1bXlkICB2ZGZ2ZGZ2() {
    void* handle = dlopen(0, RTLD_GLOBAL | RTLD_NOW);
    
    char *str = "cHRyYWNl"; // b64_encode("ptrace")
    char *enc = (char *)dnRnanRma2RzZmdpZmtkdmpmc2RrZGVm(str, strlen(str));
    
    ptrace_ptr_t ptrace_ptr = dlsym(handle, enc);
    ptrace_ptr(PT_DENY_ATTACH, 0, 0, 0);
    dlclose(handle);
}
