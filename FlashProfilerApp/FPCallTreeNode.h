//
//  FPCallTreeNode.h
//  FlashProfilerApp
//
//  Created by peter royal on 1/9/09.
//  Copyright 2009 Peter Royal. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FPStackFrame.h"


@interface FPCallTreeNode : NSObject <NSCoding> {
    FPStackFrame *_frame;
    NSMutableArray *_children;
    NSUInteger _visits;
    float _time;
}

@property(readonly) FPStackFrame *frame;
@property(readonly) NSArray *children;
@property NSUInteger visits;
@property float time;

- (id)initWithStackFrame:(FPStackFrame *)frame;

- (BOOL)hasChild:(FPStackFrame *)frame;

- (FPCallTreeNode *)childNodeForFrame:(FPStackFrame *)frame;

- (void)addChildNode:(FPCallTreeNode *)node;

- (NSString *)indentedDescription:(NSUInteger)level;


@end
