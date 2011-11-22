/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSDate, NSURL, NSString;

@interface SANoteSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate* toDate;
@property(copy, nonatomic) NSDate* fromDate;
@property(copy, nonatomic) NSString* contentQuery;
@property(copy, nonatomic) NSURL* targetAppId;
+ (id)search;
+ (id)searchWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (id)groupIdentifier;
@end

