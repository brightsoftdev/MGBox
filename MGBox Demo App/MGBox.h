//
//  Created by matt on 14/05/12.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "MGBoxProtocol.h"

@interface MGBox : UIView <MGBoxProtocol>

@property (nonatomic, retain) NSMutableArray *topLines;
@property (nonatomic, retain) NSMutableArray *middleLines;
@property (nonatomic, retain) NSMutableArray *bottomLines;
@property (nonatomic, retain) UIView *content;
@property (nonatomic, retain) id misc;

+ (id)box;
- (void)addLayers;
- (UIImage *)screenshot:(float)scale;

@end
