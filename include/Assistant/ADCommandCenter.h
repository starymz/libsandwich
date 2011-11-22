/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "assistantd-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ADCommandCenter.h"
#import "ADSessionDelegate.h"
#import "ADSyncManagerDelegate.h"
#import "ADSpeechManagerDelegate.h"
#import "ADHandsFreeStateChangedObserver.h"
#import "ADContextManagerDelegate.h"
#import "ADLocationManagerDelegate.h"

@class ADAccount, ADServiceManager, NSMutableSet, SASStartSpeech, ADSession, ADSpeechManager, NSMutableDictionary, ADSyncManager, ADManagedStore, ADUndoManager, ADContextManager, ADRetryManager, ADCommandResultsManager, ADCallObserver, ADLocationManager;
@protocol SAServerBoundCommand, ADCommandCenterClient, ADCommandCenterRequestDelegate, ADCommandCenterSpeechDelegate;

__attribute__((visibility("hidden")))
@interface ADCommandCenter : XXUnknownSuperclass <ADSessionDelegate, ADSyncManagerDelegate, ADSpeechManagerDelegate, ADHandsFreeStateChangedObserver, ADContextManagerDelegate, ADLocationManagerDelegate> {
	dispatch_queue_s* _queue;
	id<ADCommandCenterClient> _currentClient;
	id<ADCommandCenterRequestDelegate> _requestDelegate;
	id<ADCommandCenterSpeechDelegate> _speechDelegate;
	ADAccount* _account;
	ADSession* _session;
	CFDictionaryRef _commandMap;
	ADSyncManager* _syncManager;
	ADSpeechManager* _speechManager;
	ADServiceManager* _serviceManager;
	ADUndoManager* _undoManager;
	ADContextManager* _contextManager;
	ADManagedStore* _managedStore;
	ADRetryManager* _retryManager;
	ADCommandResultsManager* _commandResultsManager;
	ADCallObserver* _callObserver;
	ADLocationManager* _locationManager;
	int _callState;
	id _speechCompletion;
	NSMutableSet* _outstandingSyncChunks;
	int _speechEvent;
	SASStartSpeech* _startSpeechCommand;
	id<SAServerBoundCommand> _currentRequest;
	id<SAServerBoundCommand> _lastRequest;
	id<SAServerBoundCommand> _waitingSpeechFinished;
	struct {
		unsigned waitingOnApp : 1;
		unsigned waitingOnAlert : 1;
	} _contextFetchState;
	NSMutableSet* _outstandingRequestIds;
	NSMutableDictionary* _aceCompletionMap;
}
@property(retain, nonatomic, setter=_setWaitingSpeechFinished:) id<SAServerBoundCommand> _waitingSpeechFinished;
@property(retain, nonatomic, setter=_setLastRequest:) id<SAServerBoundCommand> _lastRequest;
@property(retain, nonatomic, setter=_setCurrentRequest:) id<SAServerBoundCommand> _currentRequest;
@property(retain, nonatomic, setter=_setStartSpeechCommand:) SASStartSpeech* _startSpeechCommand;
@property(copy, nonatomic, setter=_setSpeechCompletion:) id _speechCompletion;
@property(retain, nonatomic, setter=_setSession:) ADSession* _session;
@property(retain, nonatomic, setter=_setAccount:) ADAccount* _account;
@property(retain, nonatomic, setter=_setSpeechDelegate:) id<ADCommandCenterSpeechDelegate> _speechDelegate;
@property(retain, nonatomic, setter=_setRequestDelegate:) id<ADCommandCenterRequestDelegate> _requestDelegate;
@property(readonly, assign, nonatomic) dispatch_queue_s* _queue;
+ (id)sharedCommandCenter;
- (void)clientDisconnected:(id)disconnected;
- (void)clientConnected:(id)connected;
- (void)fetchContext:(id)context;
- (void)syncNeeded;
- (void)syncAnchorKeys:(id)keys forceReset:(BOOL)reset;
- (void)setManagedStoreObject:(id)object forKey:(id)key;
- (void)fetchManagedStoreObjectForKey:(id)key completion:(id)completion;
- (void)rescheduleValidationRefresh;
- (void)refreshAssistantValidation;
- (void)destroyAccountWithIdentifier:(id)identifier completion:(id)completion;
- (void)setActiveAccountIdentifier:(id)identifier;
- (void)fetchActiveAccountIdentifier:(id)identifier;
- (void)deleteAccountWithIdentifier:(id)identifier;
- (void)fetchAccounts:(id)accounts;
- (void)redoRequest;
- (void)undoRequest;
- (void)fetchSupportedLanguages;
- (void)fetchSupportedLanguagesWithCompletion:(id)completion;
- (void)clearConversationAndSetApplicationContext;
- (void)clearContext;
- (void)handleReplyCommand:(id)command delegate:(id)delegate;
- (void)handleGenericAceCommand:(id)command withDelegate:(id)delegate;
- (void)sendSpeechCorrectionInfo:(id)info forCorrectionContext:(id)correctionContext;
- (void)setRecordingAlertRoute:(int)route forDelegate:(id)delegate;
- (void)setBluetoothDeviceAddress:(id)address;
- (void)cancelSpeechForDelegate:(id)delegate;
- (void)stopSpeechForDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (void)startSpeechCorrectionWithText:(id)text forCorrectionContext:(id)correctionContext delegate:(id)delegate;
- (void)startDictationWithLanguageCode:(id)languageCode options:(id)options delegate:(id)delegate;
- (void)rollbackRequestForDelegate:(id)delegate;
- (void)cancelRequestForDelegate:(id)delegate;
- (void)startSpeechRequestWithURL:(id)url withDelegate:(id)delegate;
- (void)startSpeechRequestWithDelegate:(id)delegate withOptions:(id)options;
- (void)startRequest:(id)request withDelegate:(id)delegate;
- (void)endSessionForDelegate:(id)delegate;
- (void)setLockState:(BOOL)state;
- (void)setLanguageCode:(id)code;
- (void)preheat;
- (void)_removeDelegate:(id)delegate;
- (void)_syncNeeded;
- (void)_syncAnchorKeys:(id)keys forceReset:(BOOL)reset;
- (id)_managedStoreObjectForKey:(id)key;
- (void)_setManagedStoreObject:(id)object forKey:(id)key;
- (void)_rescheduleValidationRefresh;
- (void)_refreshAssistantValidation;
- (void)_destroyAccountWithIdentifier:(id)identifier completion:(id)completion;
- (void)_setActiveAccountIdentifier:(id)identifier;
- (id)_activeAccountIdentifier;
- (void)_deleteAccountWithIdentifier:(id)identifier;
- (id)_accounts;
- (void)_redoRequest;
- (void)_undoRequest;
- (void)_fetchSupportedLanguagesWithCompletion:(id)completion;
- (void)_handleReplyCommand:(id)command delegate:(id)delegate;
- (void)_handleGenericAceCommand:(id)command withDelegate:(id)delegate;
- (void)_sendSpeechCorrectionInfo:(id)info forCorrectionContext:(id)correctionContext;
- (void)_setRecordingAlertRoute:(int)route forDelegate:(id)delegate;
- (void)_setBluetoothDeviceAddress:(id)address;
- (void)_cancelSpeechForDelegate:(id)delegate;
- (void)_stopSpeechForDelegate:(id)delegate;
- (void)_startSpeechCorrectionWithText:(id)text forCorrectionContext:(id)correctionContext delegate:(id)delegate;
- (void)_rollbackRequestForDelegate:(id)delegate;
- (void)_cancelRequestForDelegate:(id)delegate;
- (void)_startDictationWithLanguageCode:(id)languageCode options:(id)options delegate:(id)delegate;
- (void)_startSpeechRequestWithURL:(id)url withDelegate:(id)delegate;
- (void)_startSpeechRequestWithDelegate:(id)delegate withOptions:(id)options;
- (void)_startRequest:(id)request withDelegate:(id)delegate;
- (void)_clearConversationAndSetApplicationContext;
- (void)_setContext;
- (void)_clearContext;
- (void)_endSessionForDelegate:(id)delegate;
- (void)_setLockState:(BOOL)state;
- (void)_setLanguageCode:(id)code;
- (void)_preheat;
- (void)contextManager:(id)manager didReceiveNewAlertContext:(id)context;
- (void)adShouldSpeakStateDidChange:(BOOL)ad;
- (void)speechManager:(id)manager didFailWithError:(id)error;
- (void)speechManagerDidCancel:(id)speechManager;
- (void)speechManager:(id)manager finishedWithTotalPackets:(int)totalPackets;
- (void)speechManager:(id)manager updatedAveragePower:(float)power peakPower:(float)power3;
- (void)speechManager:(id)manager capturedPackets:(id)packets totalCount:(int)count;
- (void)speechManager:(id)manager didStartForDictation:(BOOL)dictation withCodec:(id)codec source:(id)source;
- (void)speechManagerWillStartRecording:(id)speechManager;
- (void)syncManager:(id)manager finishedSyncForKeys:(id)keys;
- (void)syncManager:(id)manager chunkForKey:(id)key preAnchor:(id)anchor postAnchor:(id)anchor4 validity:(id)validity toAdd:(id)add toRemove:(id)remove;
- (void)locationManager:(id)manager wantsToSetRequestOrigin:(id)setRequestOrigin;
- (BOOL)locationManager:(id)manager shouldStartMonitoringLocationForRequest:(id)request;
- (void)assistantSessionConnectionDidReset:(id)assistantSessionConnection;
- (BOOL)assistantSessionShouldRestartConnectionOnWiFi:(id)assistantSession;
- (BOOL)assistantSessionShouldSetAssistantData:(id)assistantSession;
- (void)assistantSession:(id)session receivedError:(id)error;
- (BOOL)_isRetryableSessionError:(id)error;
- (void)_sessionDidFailWithError:(id)_session;
- (void)assistantSession:(id)session receivedCommand:(id)command;
- (void)_handleCommand:(id)command;
- (BOOL)_handleSystemDomainCommand:(id)command;
- (void)_saUnhandledObject:(id)object;
- (void)_saGetRequestOrigin:(id)origin;
- (void)_saAcknowledgeAlert:(id)alert;
- (void)_sasSpeechFailure:(id)failure;
- (void)_sasSpeechRecognized:(id)recognized;
- (void)_saSyncChunkAccepted:(id)accepted;
- (void)_saSyncChunkDenied:(id)denied;
- (void)_saSyncGetAnchorsResponse:(id)response;
- (void)_saRollbackSucceeded:(id)succeeded;
- (void)_saCancelSucceeded:(id)succeeded;
- (void)_saAssistantDestroyed:(id)destroyed;
- (void)_saSendCommands:(id)commands;
- (void)_saCommandIgnored:(id)ignored;
- (void)_saCommandFailed:(id)failed;
- (void)_saSetSupportedLocales:(id)locales;
- (void)_saRequestCompleted:(id)completed;
- (void)_handleBareRequestCompleted:(id)completed;
- (void)_handleRequestCompletedWithCallbacks:(id)callbacks;
- (void)_endUndoGrouping;
- (void)_beginUndoGrouping;
- (void)_stopObserveringCallState;
- (void)_startObservingCallState;
- (BOOL)_isInCall;
- (void)_syncIfNeeded;
- (void)_continueSyncIfConditionsMet;
- (void)_requestAnchorsForKeys:(id)keys;
- (BOOL)_handleServiceCommand:(id)command;
- (BOOL)_sendCommand:(id)command domain:(id)domain toBundleWithIdentifier:(id)identifier;
- (void)_handleBundleReply:(id)reply inverse:(id)inverse error:(id)error forCommand:(id)command onConnection:(id)connection;
- (void)_handleBundleResponse:(id)response inverse:(id)inverse forCommand:(id)command;
- (void)_handleBundleError:(id)error forCommand:(id)command;
- (void)_sendUndoBundleCommands:(id)commands toServiceConnection:(id)serviceConnection;
- (void)_cancelCurrentRequest;
- (void)_handleNextResultCallbacksForReply:(id)reply;
- (void)_handleNewStartRequest:(id)request;
- (void)_reallyHandleNewStartRequest:(id)request;
- (void)_sendWaitingSpeechFinished;
- (BOOL)_sendCommandToUIClient:(id)uiclient;
- (void)_sendCancelSpeechForCommand:(id)command;
- (void)_sendRollbackCommandForCommand:(id)command;
- (void)_sendCommandFailedForCommand:(id)command reason:(id)reason;
- (void)_sendCommandIgnoredForCommand:(id)command;
- (void)_sendRetryableRequestToServer:(id)server;
- (void)_sendRequestToServer:(id)server;
- (void)_sendCommandToServer:(id)server completion:(id)completion;
- (void)_sendCommandToServer:(id)server;
- (BOOL)_refIdIsSpeechStart:(id)start;
- (void)_retryNakedCommandsIfNeeded;
- (void)_speechCaptureCompleted;
- (void)_replaceSpeechDelegateWhenReady:(id)ready withCompletion:(id)completion;
- (void)_replaceRequestDelegate:(id)delegate;
- (void)_clearSpeechDelegateState;
- (void)_clearRequestDelegateState;
- (void)_requestDidEnd;
- (void)_requestDidStart;
- (id)_contextManager;
- (id)_undoManager;
- (id)_speechManager;
- (id)_syncManager;
- (void)_clearAccount;
- (void)_cancelSessionIfIdle;
- (void)_cancelSession;
- (id)_locationManager;
- (id)_resultsManager;
- (id)_retryManager;
- (id)_serviceManager;
- (id)_managedStore;
- (void)_removeAllCompletions;
- (void)_invokeAllCompletions;
- (void)_invokeCompletionForCommand:(id)command;
- (void)_removeCompletionsForCommandId:(id)commandId;
- (void)_addCompletion:(id)completion forCommandId:(id)commandId;
- (BOOL)_syncChunkWindowFull;
- (void)_clearSyncChunks;
- (void)_removeOutstandingSyncChunkId:(id)anId;
- (void)_addOutstandingSyncChunkId:(id)anId;
- (BOOL)_hasOutstandingRequests;
- (BOOL)_hasOutstandingRequestId:(id)anId;
- (void)_removeOutstandingRequestId:(id)anId;
- (void)_addOutstandingRequestId:(id)anId;
- (void)dealloc;
- (id)init;
@end

@interface ADCommandCenter (AMOS)
- (void)_handleCommandInAMOS:(id)amos;
- (void)_saDomainObjectCommit:(id)commit;
- (void)_amosSADomainObjectCommit:(id)commit;
- (void)_sendCommitResponseForCommand:(id)command identifier:(id)identifier;
- (void)_saDomainObjectDelete:(id)aDelete;
- (void)_amosSADomainObjectDelete:(id)aDelete;
- (void)_sendDeleteResponseForCommand:(id)command;
- (void)_saDomainObjectCancel:(id)cancel;
- (void)_amosSADomainObjectCancel:(id)cancel;
- (void)_sendCancelResponseForCommand:(id)command;
- (void)_saDomainObjectUpdate:(id)update;
- (void)_amosSADomainObjectUpdate:(id)update;
- (void)_updateObjectFromService:(id)service sadIdentifier:(id)identifier;
- (void)_sendUpdateResponseForCommand:(id)command withUpdatedIdentifier:(id)updatedIdentifier;
- (void)_saDomainObjectRetrieve:(id)retrieve;
- (void)_amosSADomainObjectRetrieve:(id)retrieve;
- (void)_sendRetrieveResponseForCommand:(id)command withSADObjects:(id)sadobjects;
- (void)_saDomainObjectCreate:(id)create;
- (void)_amosSADomainObjectCreate:(id)create;
- (void)_sendCreateResponseForCommand:(id)command withIdentifier:(id)identifier;
- (void)_sendAMOSCommandToService:(id)service responseHandler:(id)handler;
- (BOOL)_handleSADOCommandIfServiceDoesNotUseAMOS:(id)amos allowInterposing:(BOOL)interposing;
- (BOOL)_sendAMOSCommand:(id)command domain:(id)domain toBundleWithIdentifier:(id)identifier;
@end

