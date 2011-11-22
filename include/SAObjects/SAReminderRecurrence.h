/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray* weeksOfTheYear;
@property(copy, nonatomic) NSArray* monthsOfTheYear;
@property(assign, nonatomic) int interval;
@property(copy, nonatomic) NSString* frequencyTimeUnit;
@property(copy, nonatomic) NSArray* daysOfTheYear;
@property(copy, nonatomic) NSArray* daysOfTheWeek;
@property(copy, nonatomic) NSArray* daysOfTheMonth;
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;
+ (id)recurrence;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

