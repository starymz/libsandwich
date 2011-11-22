/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray;

@interface SASPhrase : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) BOOL lowConfidence;
@property(copy, nonatomic) NSArray* interpretations;
+ (id)phrase;
+ (id)phraseWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

