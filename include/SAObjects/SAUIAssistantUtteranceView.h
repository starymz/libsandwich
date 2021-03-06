/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADeferredKeyObject.h"
#import "SAAceView.h"

@class NSString;

@interface SAUIAssistantUtteranceView : SAAceView <SADeferredKeyObject> {
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSString* dialogIdentifier;
+ (id)assistantUtteranceView;
+ (id)assistantUtteranceViewWithDictionary:(id)dictionary context:(id)context;
- (id)deferredKeys;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

