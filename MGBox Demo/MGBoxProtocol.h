//
//  Created by Matt Greenfield on 25/05/12.
//  Copyright 2012 Big Paua. All rights reserved.
//

@protocol MGBoxProtocol

@property (nonatomic, assign) BOOL isReplacement;
@property (nonatomic, assign) CGFloat topMargin;
@property (nonatomic, assign) CGFloat bottomMargin;
@property (nonatomic, assign) CGFloat width;

- (void)draw;

@end
