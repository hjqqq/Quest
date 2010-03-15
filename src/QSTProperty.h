//
//  QSTProperty.h
//  Quest
//
//  Created by Per Borgman on 2010-03-14.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MutableVector2;

typedef enum {
	QSTPropertyInt,
	QSTPropertyFloat,
	QSTPropertyVector,
	QSTPropertyString
} QSTPropertyType;

@interface QSTProperty : NSObject {
	QSTPropertyType type;
	NSString *name;
	
	union {
		int				intVal;
		float			floatVal;
		MutableVector2*	vectorVal;
		NSString*		stringVal;
	} data;
}

+(QSTProperty*)propertyWithInt:(int)i;
+(QSTProperty*)propertyWithVector:(MutableVector2*)v;
+(QSTProperty*)propertyWithFloat:(float)f;
+(QSTProperty*)propertyWithString:(NSString*)s;

-(id)initWithInt:(int)i;
-(id)initWithVector:(MutableVector2*)v;
-(id)initWithFloat:(float)f;
-(id)initWithString:(NSString*)s;

-(int)intVal;
-(float)floatVal;
-(MutableVector2*)vectorVal;
-(NSString*)stringVal;

-(void)setIntVal:(int)val;
-(void)setFloatVal:(float)val;
-(void)setVectorVal:(MutableVector2*)val;
-(void)setStringVal:(NSString*)val;

-(void)print;

@end
