/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "assistantd-Structs.h"

@class NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface ADSpeechLog : XXUnknownSuperclass {
	dispatch_queue_s* _logQueue;
	NSDateFormatter* _dateFormatter;
	int _fd;
	NSString* _filePath;
}
+ (id)buffersFromSpeechLogAtURL:(id)url;
- (void)endSpeechLog;
- (void)cancelCurrentSpeechLog;
- (void)appendSpeechPackets:(id)packets;
- (void)appendSpeechPacket:(id)packet;
- (void)beginNewSpeechLogWithFormat:(id)format;
- (id)_nowString;
- (id)_dateFormatter;
- (id)_logDirPath;
- (void)dealloc;
- (id)init;
@end

