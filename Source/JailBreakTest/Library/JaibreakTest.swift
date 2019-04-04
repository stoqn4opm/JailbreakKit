//
//  JaibreakTest.swift
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 02/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

import UIKit

// MARK: - Public Interface

/// Functions that exits the current process in case the device is jailbroken.
///
/// ```
/// func killIfJailbroken() -> Bool // non obfuscated name
/// ```
///
/// **DO NOT MAKE A FUNCTION WITH A NICER NAME THAT WRAPS THIS ONE!!!!**
///
/// **PLEASE NOTE THAT IF YOU DO, YOU INTRODUCE A EASY HOOK LOCATION FOR METHOD SWIZZLING, AND ATTACKER CAN JUST PATCH THE BINARY
/// BY GUESSING WHAT YOUR FUNCTION IS DOING JUST BY THE NAME. IN 'C' AND 'OBJECTIVE-C' APPS, YOU CAN
/// USE PREPROCESSOR MACROS WITH NICER NAMES.**
///
/// - Note: This function has a name like this, so that no one could guess what it does
/// by looking at the decrypted binary of the app, because the inlining may not happen every time.
@inline(__always) public func XMa2xaWF3lZHRMNTRd2OZMMbc1VljG() {
    guard sGlGYlWykRChFdlnRkeVhsTTT() else { return }
    exit(0); // not happy exit because jailbreak was found, but giving status 0 as if everything is fine
}

/// Function that checks whether the device is jailbroken or not.
///
/// ```
/// func isJailbroken() -> Bool // non obfuscated name
/// ```
///
/// This function calls every jailbreak check in this framework one by one
/// and if one of them says the device is jailbroken the it is enough for positive answer.
///
/// In case of internal errors in the checking process, this function will say that the
/// device is jailbroken as a safety precaution.
///
/// **DO NOT MAKE A FUNCTION WITH A NICER NAME THAT WRAPS THIS ONE!!!!**
///
/// **PLEASE NOTE THAT IF YOU DO, YOU INTRODUCE A EASY HOOK LOCATION FOR METHOD SWIZZLING, AND ATTACKER CAN JUST PATCH THE BINARY
/// BY GUESSING WHAT YOUR FUNCTION IS DOING JUST BY THE NAME. IN 'C' AND 'OBJECTIVE-C' APPS, YOU CAN
/// USE PREPROCESSOR MACROS WITH NICER NAMES.**
///
/// - Note: This function has a name like this, so that no one could guess what it does
/// by looking at the decrypted binary of the app, because the inlining may not happen every time.
///
/// - Returns: true if the device is jailbroken, false if it is not.
@inline(__always) public func sGlGYlWykRChFdlnRkeVhsTTT() -> Bool {
    
    guard TARGET_IPHONE_SIMULATOR != 1 else { return false }
    
    guard WTNsa2FXRTZMeTl3WVdOcllXZGxMMk52YlM1bGVHRnRjR3hsTG5CaFkydGhaMlU9() == false else { return true } // File System Check 1
    guard FaC5GTsh3RjRnRHVGb1MlY25kMMxGZXllcOdVW3lTeMZTRXF2asNTW()           == false else { return true } // File System Check 2
    
    guard cacdZHNhZHNhZmRzZmFkc2Zkc2Zkc2ZhZGFzZGE() == false else { return true } // dyld check 1: MobileSubstrate
    guard scdcfvgbHN4ZHNjZHNhYyBnIGdtZGdmZ3NkdnNk() == false else { return true } // dyld check 2: CydiaSubstrate
    guard dmhuZ2ZnaG55dGVyZ3Q1Nnl0dXJldGdm()        == false else { return true } // dyld check 3: Cycript
    return false
}

