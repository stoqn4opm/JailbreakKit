//
//  String+Base64.swift
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 03/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

import Foundation

// MARK: - Base64 Helpers

extension String {
    
    /// Function that reads the current string as base64 encoded one, decodes it and gives back the result.
    @inline(__always) func EDF7A2822202() -> String {
        let data = Data(base64Encoded: self)!
        return String(data: data, encoding: .utf8)!
    }
    
    /// Function that encodes the current string in base64 format.
//    @inline(__always) func toBase64() -> String {
//        #warning("this call here will give directions about ba64 encryption")
//        return Data(self.utf8).base64EncodedString()
//    }
}
