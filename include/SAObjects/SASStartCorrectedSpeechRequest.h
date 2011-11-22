/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAStartRequest.h"

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest {
}
@property(copy, nonatomic) NSString* sessionId;
@property(copy, nonatomic) NSString* interactionId;
+ (id)startCorrectedSpeechRequest;
+ (id)startCorrectedSpeechRequestWithDictionary:(id)dictionary context:(id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

