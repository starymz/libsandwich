/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "assistantd-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class CLLocationManager, SAGetRequestOrigin;
@protocol ADLocationManagerDelegate;

__attribute__((visibility("hidden")))
@interface ADLocationManager : XXUnknownSuperclass <CLLocationManagerDelegate> {
	dispatch_queue_s* _queue;
	id<ADLocationManagerDelegate> _delegate;
	BOOL _needsToSendLocation;
	CLLocationManager* _locationManager;
	int _lastStatus;
	BOOL _lastEnabledState;
	SAGetRequestOrigin* _requestOriginCommand;
	dispatch_source_s* _locationTimerSource;
	id _updateCompletion;
}
@property(copy, nonatomic, setter=_setUpdateCompletion:) id _updateCompletion;
@property(copy, nonatomic, setter=_setRequestOriginCommand:) SAGetRequestOrigin* _requestOriginCommand;
@property(assign, nonatomic) BOOL needsToSendLocation;
@property(assign, nonatomic) id<ADLocationManagerDelegate> delegate;
+ (BOOL)isLocationRestricted;
- (id)currentRequestOrigin;
- (void)updateLocationForCommand:(id)command completion:(id)completion;
- (void)setQueue:(dispatch_queue_s*)queue;
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
- (BOOL)_shouldSendLocationUpdate:(id)update fromLocation:(id)location forCommand:(id)command;
- (void)_startMonitoringLocationForGetRequestOrigin:(id)getRequestOrigin completion:(id)completion;
- (void)_scheduleLocationTimeout:(double)timeout;
- (void)_cancelLocationTimer;
- (void)_clearCompletionState;
- (void)_stopMonitoringLocation;
- (void)_locationUnknownForGetOrigin:(id)getOrigin block:(id)block;
- (void)_locationTimedOutForGetOrigin:(id)getOrigin block:(id)block;
- (void)_locationDeniedForGetOrigin:(id)getOrigin block:(id)block;
- (void)_locationDisabledForGetOrigin:(id)getOrigin block:(id)block;
- (void)_invokeBlockForStatus:(id)status getOrigin:(id)origin block:(id)block;
- (void)_invokeBlockForLocation:(id)location getOrigin:(id)origin block:(id)block;
- (id)_locationManager;
- (BOOL)_locationAuthStatusIsDenied:(int)denied;
- (int)_locationAuthStatus;
- (BOOL)_locationServicesIsEnabled;
- (void)dealloc;
- (id)init;
@end

