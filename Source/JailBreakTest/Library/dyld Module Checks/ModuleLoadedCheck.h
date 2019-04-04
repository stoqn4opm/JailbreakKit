//
//  ModuleLoadedCheck.h
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 03/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#ifndef ModuleLoadedCheck_h
#define ModuleLoadedCheck_h

#include <stdio.h>
#include <string.h>
#include <mach-o/dyld.h>

/**
 * `bool hasLoadedModuleNamed(char *);`
 *
 * Checks whether a dyld module with a given name is loaded.
 * It works by printing all loaded modules and then comparing
 * the passed string against the module names.
 * Returns `true` only if the passed string is contained in
 * the whole name of the module.
 */
bool ic3RlXU3VTG9hZGVyyYR(char *) __attribute__((always_inline)); // bool hasLoadedModuleNamed(char *);

#endif /* ModuleLoadedCheck_h */


/*

 examples of module names:
 
 /Library/MobileSubstrate/MobileSubstrate.dylib46
 
 /Library/Frameworks/CydiaSubstrate.framework/Libraries/SubstrateLoader.dylib107
 
 /usr/lib/libcycript.dylib/usr/lib/libcycript.dylib
 
 /System/Library/Frameworks/Foundation.framework/Foundation24
 
 /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib58
 
 /usr/lib/libgcc_s.1.dylib26
 
 /usr/lib/libstdc++.6.dylib76
 
 */
