/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (nonatomic, readonly) int backgroundStyle;
@property (nonatomic, readonly) int compatibilityMode;
@property (nonatomic, readonly) int controlCenterRevealMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultPNGExpirationTime;
@property (nonatomic, readonly, copy) NSString *defaultPNGName;
@property (nonatomic, readonly) BOOL defaultStatusBarHidden;
@property (nonatomic, readonly) int defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL deviceOrientationEventsEnabled;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL idleModeVisualEffectsEnabled;
@property (nonatomic, readonly) BOOL idleTimerDisabled;
@property (nonatomic, readonly) int interfaceOrientation;
@property (nonatomic, readonly) BOOL interfaceOrientationChangesDisabled;
@property (nonatomic, readonly) int notificationCenterRevealMode;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } primaryWindowOverlayInsets;
@property (nonatomic, readonly) unsigned int proximityDetectionModes;
@property (nonatomic, readonly) unsigned int statusBarContextID;
@property (nonatomic, readonly) BOOL statusBarHidden;
@property (nonatomic, readonly) int statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int supportedInterfaceOrientations;
@property (nonatomic, readonly) int whitePointAdaptivityStyle;

- (int)backgroundStyle;
- (int)compatibilityMode;
- (int)controlCenterRevealMode;
- (double)defaultPNGExpirationTime;
- (id)defaultPNGName;
- (BOOL)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (BOOL)deviceOrientationEventsEnabled;
- (BOOL)idleModeVisualEffectsEnabled;
- (BOOL)idleTimerDisabled;
- (int)interfaceOrientation;
- (BOOL)interfaceOrientationChangesDisabled;
- (BOOL)isUISubclass;
- (id)keyDescriptionForOtherSetting:(unsigned int)arg1;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)notificationCenterRevealMode;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })primaryWindowOverlayInsets;
- (unsigned int)proximityDetectionModes;
- (unsigned int)statusBarContextID;
- (BOOL)statusBarHidden;
- (int)statusBarStyle;
- (unsigned int)supportedInterfaceOrientations;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofOtherSetting:(unsigned int)arg3;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (int)whitePointAdaptivityStyle;

@end
