/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SASToken : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* text;
@property(retain, nonatomic) NSNumber* startTime;
@property(assign, nonatomic) BOOL removeSpaceBefore;
@property(assign, nonatomic) BOOL removeSpaceAfter;
@property(retain, nonatomic) NSNumber* endTime;
@property(retain, nonatomic) NSNumber* confidenceScore;
+ (id)tokenWithDictionary:(id)dictionary context:(id)context;
+ (id)token;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

