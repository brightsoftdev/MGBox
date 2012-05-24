//
//  Created by Matt Greenfield on 3/01/12.
//  Copyright 2012 Big Paua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@class MGBox;

typedef enum {
    UnderlineNone, UnderlineTop, UnderlineBottom
} UnderlineType;

typedef enum {
    SidePrecedenceLeft, SidePrecedenceRight
} SidePrecedence;

@interface MGBoxLine : UIView

@property (nonatomic, retain) NSMutableArray *contentsLeft;
@property (nonatomic, retain) NSMutableArray *contentsRight;
@property (nonatomic, assign) UnderlineType underlineType;
@property (nonatomic, assign) SidePrecedence sidePrecedence;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIFont *rightFont;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, assign) MGBox *parentBox;
@property (nonatomic, retain) CALayer *solidUnderline;
@property (nonatomic, assign) CGFloat linePadding;
@property (nonatomic, assign) CGFloat itemPadding;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, retain) UIView *leftViews;
@property (nonatomic, retain) UIView *rightViews;
@property (nonatomic, retain) id misc;

+ (id)lineWithWidth:(CGFloat)width;
+ (id)lineWithContents:(NSArray *)_contents
                 width:(CGFloat)width;
+ (id)lineWithLeft:(NSObject *)left right:(NSObject *)right
             width:(CGFloat)width;
+ (id)multilineWithText:(NSString *)text font:(UIFont *)font
                padding:(CGFloat)padding width:(CGFloat)width;

- (void)layoutContents;

- (UILabel *)makeLabel:(NSString *)text right:(BOOL)right;

@end
