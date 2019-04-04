//
//  JailbreakModules.c
//  JailbreakTest
//
//  Created by Stoyan Stoyanov on 03/04/2019.
//  Copyright © 2019 Stoyan Stoyanov. All rights reserved.
//

#include "JailbreakModules.h"
#include "ModuleLoadedCheck.h"
#include "b64.h"
#include <stdlib.h>


// Reference for the weird strings used in the functions:
//
// b64_encode("MobileSubstrate")    == "TW9iaWxlU3Vic3RyYXRl"
// b64_encode("SubstrateLoader")    == "U3Vic3RyYXRlTG9hZGVy"
// b64_encode("CydiaSubstrate")     == "Q3lkaWFTdWJzdHJhdGU="
// b64_encode("libcycript")         == "bGliY3ljcmlwdA=="
// b64_encode("cynject")            == "Y3luamVjdA=="

//bool hasMobileSubstrateLoaded()
bool cacdZHNhZHNhZmRzZmFkc2Zkc2Zkc2ZhZGFzZGE() {
    
    char *str = "TW9iaWxlU3Vic3RyYXRl"; // b64_encode("MobileSubstrate")
    char *enc = (char *)dnRnanRma2RzZmdpZmtkdmpmc2RrZGVm(str, strlen(str));
    bool isLoaded = ic3RlXU3VTG9hZGVyyYR(enc);
    
    free(enc);
    return isLoaded;
}

//bool hasCydiaSubstrateLoaded()
bool scdcfvgbHN4ZHNjZHNhYyBnIGdtZGdmZ3NkdnNk() {
    
    char *str = "U3Vic3RyYXRlTG9hZGVy"; // b64_encode("SubstrateLoader")
    char *enc = (char *)dnRnanRma2RzZmdpZmtkdmpmc2RrZGVm(str, strlen(str));
    bool isLoaded = ic3RlXU3VTG9hZGVyyYR(enc);
    
    free(enc);
    if (isLoaded) { return true; }
    
    char *str1 = "Q3lkaWFTdWJzdHJhdGU="; // b64_encode("CydiaSubstrate")
    char *enc1 = (char *)dnRnanRma2RzZmdpZmtkdmpmc2RrZGVm(str1, strlen(str1));
    bool isLoaded1 = ic3RlXU3VTG9hZGVyyYR(enc1);
    
    free(enc1);
    return isLoaded1;
}

//bool hasCycriptLoaded()
bool dmhuZ2ZnaG55dGVyZ3Q1Nnl0dXJldGdm() {
    
    char *str = "bGliY3ljcmlwdA=="; // b64_encode("libcycript")
    char *enc = (char *)dnRnanRma2RzZmdpZmtkdmpmc2RrZGVm(str, strlen(str));
    bool isLoaded = ic3RlXU3VTG9hZGVyyYR(enc);
    
    free(enc);
    if (isLoaded) { return true; }
    
    char *str1 = "Y3luamVjdA=="; // b64_encode("cynject")
    char *enc1 = (char *)dnRnanRma2RzZmdpZmtkdmpmc2RrZGVm(str1, strlen(str1));
    bool isLoaded1 = ic3RlXU3VTG9hZGVyyYR(enc1);
    
    free(enc1);
    return isLoaded1;
}
