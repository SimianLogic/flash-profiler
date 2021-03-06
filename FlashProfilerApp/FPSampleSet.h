//
//  FPSampleSet.h
//  FlashProfilerApp
//
//  Created by peter royal on 1/7/09.
//  Copyright 2009 Peter Royal. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FPCallTree.h"
#import "FPSample.h"


@interface FPSampleSet : NSObject <NSCoding> {
    FPCallTree *callTree;
    NSMutableArray *objects;
    NSMutableArray *cpu;
    NSMutableDictionary *objectsById;
}

@property(readonly) FPCallTree *callTree;
@property(readonly) NSMutableArray *objects;
@property(readonly) NSMutableArray *cpu;

- (void)add:(FPSample *)sample;

@end
