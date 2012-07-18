//
//  UDSpriteButton.h
//
//  Created by Rolandas Razma on 7/15/12.
//  Copyright (c) 2012 UD7. All rights reserved.
//

#import "CCSprite.h"
#import "CCTouchDelegateProtocol.h"


enum {
    UDButtonEventTouchDown          = 1 <<  0,
    UDButtonEventTouchDownRepeat    = 1 <<  1,
    UDButtonEventTouchDragInside    = 1 <<  2,
    UDButtonEventTouchDragOutside   = 1 <<  3,
    UDButtonEventTouchUpInside      = 1 <<  4,
    UDButtonEventTouchUpOutside     = 1 <<  5,
    UDButtonEventTouchHold          = 1 <<  6,
};
typedef NSUInteger UDButtonEvents;


@interface UDSpriteButton : CCSprite

@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(nonatomic, getter = isSelected) BOOL selected;

+ (id)buttonWithSpriteFile:(NSString *)fileName;
+ (id)buttonWithSpriteFrameName:(NSString *)spriteFrameName highliteSpriteFrameName:(NSString *)highliteSpriteFrameName;
- (id)initWithSpriteFile:(NSString *)fileName;
- (id)initWithSpriteFrameName:(NSString *)spriteFrameName highliteSpriteFrameName:(NSString *)highliteSpriteFrameName;

- (void)addBlock:(BasicBlock)block forControlEvents:(UDButtonEvents)controlEvents;

@end
