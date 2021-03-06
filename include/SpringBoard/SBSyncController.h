/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSTimer;

@interface SBSyncController : SBUnknownSuperclass {
	int _restoreState;	// 4 = 0x4
	int _resetState;	// 8 = 0x8
	int _restoreTimerState;	// 12 = 0xc
	NSTimer *_restoreTimer;	// 16 = 0x10
	BOOL _showingResetUI;	// 20 = 0x14
	BOOL _appsChangedDuringSync;	// 21 = 0x15
	int _restoreStartedNotifyToken;	// 24 = 0x18
	int _restoreEndedNotifyToken;	// 28 = 0x1c
}
@property(readonly, assign) int restoreState;	// G=0xa06b5; converted property
@property(readonly, assign) int resetState;	// G=0xa06e1; converted property
+ (id)sharedInstance;	// 0xa0725
- (void)dealloc;	// 0xa187d
- (void)startObserving;	// 0xa1671
- (void)stopObserving;	// 0xa15cd
- (void)_setRestoreState:(int)state;	// 0xa1575
- (void)frontLockedWhenPossible;	// 0xa14f9
- (void)syncSessionDidEnd;	// 0xa141d
- (void)_wirelessSyncEnded:(id)ended;	// 0xa13f1
- (BOOL)isRestoring;	// 0xa068d
// converted property getter: - (int)restoreState;	// 0xa06b5
- (void)_notifyRestoreCanProceed;	// 0xa13bd
- (void)_killApplications;	// 0xa13b5
- (void)beginRestoring;	// 0xa11dd
- (void)finishedTerminatingApplications;	// 0xa1125
- (void)cancelRestoring;	// 0xa10e9
- (void)_rebootNow;	// 0xa10ad
- (void)finishEndRestoring;	// 0xa109d
- (void)didEndRestoring:(int)restoring;	// 0xa0f91
- (BOOL)isResetting;	// 0xa06c5
// converted property getter: - (int)resetState;	// 0xa06e1
- (void)_delayedQuitApplications;	// 0xa0f31
- (void)_delayedBeginReset;	// 0xa0bcd
- (void)beginResetting:(BOOL)resetting;	// 0xa0b31
- (void)didEndResetting;	// 0xa0a79
- (void)_resetStarted:(id)started;	// 0xa0a4d
- (void)_resetEnded:(id)ended;	// 0xa0a21
- (void)_invalidateRestoreTimer;	// 0xa09f5
- (BOOL)_isBackupAgentRunning;	// 0xa0921
- (void)_restoreTimerFired:(id)fired;	// 0xa087d
- (void)_setupRestoreTimer;	// 0xa0801
- (void)_appInstallationNotification;	// 0xa07ad
- (BOOL)isInUse;	// 0xa076d
@end
