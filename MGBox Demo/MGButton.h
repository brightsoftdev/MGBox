//
//  Created by matt on 3/04/12.
//
//

#import <Foundation/Foundation.h>

@interface MGButton : UIButton

@property (nonatomic, copy) NSString *toUrl;
@property (nonatomic, copy) NSString *toPlist;
@property (nonatomic, copy) NSString *toSelector;
@property (nonatomic, assign) CGFloat maxWidth;
@property (nonatomic, retain) id misc;

@end
