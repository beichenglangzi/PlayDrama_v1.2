//
//  GCD.h
//  GCD
//
//  http://home.cnblogs.com/u/YouXianMing/
//  https://github.com/YouXianMing
//
//  Created by hairong.chen on 15/7/21.
//  Copyright (c) 2015年 times. All rights reserved.
//

#import "GCDQueue.h"
#import "GCDGroup.h"
#import "GCDSemaphore.h"
#import "GCDTimer.h"


#define  GCD_EXAMPLE  0
#ifndef GCDExecuteOnce
#define GCDExecuteOnce(block) {static dispatch_once_t predicate = 0; dispatch_once(&predicate, block);}
#endif


#if GCD_EXAMPLE

GCDExecuteOnce(^{
    // code here.
});

#endif

