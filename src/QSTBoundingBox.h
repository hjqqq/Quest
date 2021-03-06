//
//  QSTBoundingBox.h
//  Quest
//
//  Created by Per Borgman on 22/2/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Vector2;

@interface QSTBoundingBox : NSObject {
	Vector2	*min;
	Vector2	*max;
}

@property (nonatomic,readonly) Vector2 *min;
@property (nonatomic,readonly) Vector2 *max;

+(QSTBoundingBox*)bboxWithMinX:(float)minX minY:(float)minY maxX:(float)maxX maxY:(float)maxY;
+(QSTBoundingBox*)bboxWithMin:(Vector2*)tMin max:(Vector2*)tMax;

-(id)initWithMinX:(float)minX minY:(float)minY maxX:(float)maxX maxY:(float)maxY;
-(id)initWithMin:(Vector2*)tMin max:(Vector2*)tMax;

-(NSString*)repr;

@end
