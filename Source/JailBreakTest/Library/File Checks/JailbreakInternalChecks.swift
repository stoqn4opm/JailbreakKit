//
//  JailbreakInternalChecks.swift
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 03/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

import UIKit

// MARK: - Internal Helpers

/// Jailbreak Check 1 : existence of files that are common for jailbroken devices
///
/// This func searches for existence of files present only on jailbroken devices.
/// If it finds atleast one, it says that the device is jailbroken.
///
/// - Note: This function has a name like this, so that no one could guess what it does
/// by looking at the decrypted binary of the app, because the inlining may not happen every time.
@inline(__always) func WTNsa2FXRTZMeTl3WVdOcllXZGxMMk52YlM1bGVHRnRjR3hsTG5CaFkydGhaMlU9() -> Bool {
    
    // All these are base64 encoded strings. In comments on every line you can see
    // what the encoded strings look like. The purpose of this encoding is to make it
    // hard for hackers to search the DATA segment of the decrypted bynary and find strings like
    // 'Cydia', 'MobileSubstrate', etc., which will help them patch our jailbreak detection.
    let file0 = "L0FwcGxpY2F0aW9ucy9DeWRpYS5hcHA=".EDF7A2822202()                                  // "/Applications/Cydia.app"
    let file1 = "L0xpYnJhcnkvTW9iaWxlU3Vic3RyYXRlL01vYmlsZVN1YnN0cmF0ZS5keWxpYg==".EDF7A2822202()  // "/Library/MobileSubstrate/MobileSubstrate.dylib"
    let file2 = "L2Jpbi9iYXNo".EDF7A2822202()                                                      // "/bin/bash"
    let file3 = "L3Vzci9zYmluL3NzaGQ=".EDF7A2822202()                                              // "/usr/sbin/sshd"
    let file4 = "L2V0Yy9hcHQ=".EDF7A2822202()                                                      // "/etc/apt"
    let file5 = "L3ByaXZhdGUvdmFyL2xpYi9hcHQv".EDF7A2822202()                                      // "/private/var/lib/apt/"
    
    let urlTest = URL(string: "Y3lkaWE6Ly9wYWNrYWdlL2NvbS5leGFtcGxlLnBhY2thZ2U=".EDF7A2822202())   // "cydia://package/com.example.package"
    
    return
        FileManager.default.fileExists(atPath: file0) ||
            FileManager.default.fileExists(atPath: file1) ||
            FileManager.default.fileExists(atPath: file2) ||
            FileManager.default.fileExists(atPath: file3) ||
            FileManager.default.fileExists(atPath: file4) ||
            FileManager.default.fileExists(atPath: file5) ||
            UIApplication.shared.canOpenURL(urlTest!)
}


/// Jailbreak Check 2 : Reading and writing in system directories (sandbox violation).
///
/// This function tries to write a zero byte file called `47B2607B` in `/private`.
/// If it succeds writing, that means that the this process is running as root
/// Which means that the device is jailbroken, if it fails with no permissions error,
/// that would mean that the device is not jailbroken.
///
/// Every other possible outcome is considered as if the device is jailbroken,
/// as a safety precaution.
///
/// - Note: This function has a name like this, so that no one could guess what it does
/// by looking at the decrypted binary of the app, because the inlining may not happen every time.
@inline(__always) func FaC5GTsh3RjRnRHVGb1MlY25kMMxGZXllcOdVW3lTeMZTRXF2asNTW() -> Bool {
    
    do {
        try Data().write(to: URL(fileURLWithPath: "L3ByaXZhdGUvNDdCMjYwN0I=".EDF7A2822202())) // "/private/47B2607B"
        try FileManager.default.removeItem(atPath: "L3ByaXZhdGUvNDdCMjYwN0I=".EDF7A2822202()) // "/private/47B2607B"
        return true
    } catch {
        
        // if the error is
        //
        // Error Domain=NSCocoaErrorDomain Code=640 "You can’t save the file “JailbreakTest.txt”
        // because the volume “/” is out of space." UserInfo={NSUnderlyingError=0x15d5efd0 {Error Domain=NSPOSIXErrorDomain Code=28 "No space left on device"},
        // NSFilePath=/private/JailbreakTest.txt, NSUserStringVariant=Folder}
        //
        // then this check failed to tell
        
        // but if it is this
        // Error Domain=NSCocoaErrorDomain Code=513 "You don’t have permission to save the file “JailbreakTest” in the folder “private”."
        // UserInfo={NSFilePath=/private/JailbreakTest, NSUnderlyingError=0x2835249f0 {Error Domain=NSPOSIXErrorDomain Code=1 "Operation not permitted"}}
        
        // that guaranteees that the device IS NOT jailbroken
        
        guard (error as NSError).code != 513 else { /* no write permissions error, expected when device is not jailbroken */ return false }
        return true // bacause we are uncertain, better stay safe and say that it is jailbroken
    }
}
