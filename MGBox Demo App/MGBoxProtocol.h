//
//  Created by matt on 21/03/12.
//
//


@protocol MGBoxProtocol

@property (nonatomic, assign) BOOL isReplacement;
@property (nonatomic, assign) CGFloat topMargin;
@property (nonatomic, assign) CGFloat bottomMargin;
@property (nonatomic, assign) CGFloat width;

- (void)draw;

@end
