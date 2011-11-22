/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SAWeatherLocation, NSArray, SAWeatherCurrentConditions, NSString, SAWeatherUnits;

@interface SAWeatherObject : SADomainObject {
}
@property(retain, nonatomic) SAWeatherLocation* weatherLocation;
@property(copy, nonatomic) NSString* view;
@property(retain, nonatomic) SAWeatherUnits* units;
@property(copy, nonatomic) NSArray* hourlyForecasts;
@property(copy, nonatomic) NSString* extendedForecastUrl;
@property(copy, nonatomic) NSArray* dailyForecasts;
@property(retain, nonatomic) SAWeatherCurrentConditions* currentConditions;
+ (id)objectWithDictionary:(id)dictionary context:(id)context;
+ (id)object;
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
- (id)encodedClassName;
- (id)groupIdentifier;
@end

