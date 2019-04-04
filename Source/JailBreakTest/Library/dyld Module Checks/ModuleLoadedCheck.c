//
//  ModuleLoadedCheck.c
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 03/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#include "ModuleLoadedCheck.h"

//bool hasLoadedModuleNamed(char *moduleName)
bool ic3RlXU3VTG9hZGVyyYR(char *moduleName)
{
    int max = _dyld_image_count();
    for (int i = 0; i < max; i++) {
        const char *name = _dyld_get_image_name(i);
        
        if (strstr(name, moduleName) != NULL)
        {
            return true;
        }
    }
    
    return false;
}
