/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray, NSString;

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* submitLabel;
@property(copy, nonatomic) NSArray* submitCommands;
@property(copy, nonatomic) NSString* denyText;
@property(copy, nonatomic) NSArray* denyCommands;
@property(copy, nonatomic) NSString* confirmText;
@property(copy, nonatomic) NSArray* confirmCommands;
@property(copy, nonatomic) NSString* cancelTrigger;
@property(copy, nonatomic) NSString* cancelLabel;
@property(copy, nonatomic) NSArray* cancelCommands;
+ (id)confirmationOptionsWithDictionary:(id)dictionary context:(id)context;
+ (id)confirmationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

