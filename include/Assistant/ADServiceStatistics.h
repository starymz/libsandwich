/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ADServiceStatistics : XXUnknownSuperclass {
	NSString* _serviceIdentifier;
	NSMutableDictionary* _statsDict;
	NSMutableDictionary* _commandTimes;
}
@property(readonly, assign, nonatomic) NSString* serviceIdentifier;
- (void)markResponseForCommand:(id)command;
- (void)markIncomingCommand:(id)command;
- (id)_commandTimes;
- (void)_saveStats;
- (id)_statsForCommand:(id)command;
- (id)_statsDict;
- (id)_serviceStatsPath;
- (id)_statsDirectory;
- (void)dealloc;
- (id)initWithServiceIdentifier:(id)serviceIdentifier;
@end
