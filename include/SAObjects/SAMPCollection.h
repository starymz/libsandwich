/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity {
}
@property(copy, nonatomic) NSArray* items;
+ (id)collection;
+ (id)collectionWithDictionary:(id)dictionary context:(id)context;
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

