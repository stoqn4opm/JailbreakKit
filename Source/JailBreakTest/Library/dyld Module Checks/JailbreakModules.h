//
//  JailbreakModules.h
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 03/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#ifndef JailbreakModules_h
#define JailbreakModules_h

#include <stdio.h>
#include <mach-o/dyld.h>

/**
 `bool hasMobileSubstrateLoaded(void)`
 Gives info if MobileSubstrate dyld is loaded.
 
 @return true if loaded, false if not.
 */
bool cacdZHNhZHNhZmRzZmFkc2Zkc2Zkc2ZhZGFzZGE(void) __attribute__((always_inline));

/**
 `bool hasCydiaSubstrateLoaded(void)`
 Gives info if CydiaSubstrate dyld is loaded.
 
 @return true if loaded, false if not.
 */
bool scdcfvgbHN4ZHNjZHNhYyBnIGdtZGdmZ3NkdnNk(void) __attribute__((always_inline));

/**
 `bool hasCycriptLoaded(void)`
 Gives info if Cycript's dyld is loaded.
 
 @return true if loaded, false if not.
 */
bool dmhuZ2ZnaG55dGVyZ3Q1Nnl0dXJldGdm(void) __attribute__((always_inline));

#endif /* JailbreakModules_h */
