//
//  LockMeNowAppDelegate.m
//  Lock Me Now
//
//  Created by Vitaly Parovishnik on 20.07.11.
//  Copyright 2010 IGR Software. All rights reserved.
//

#import "IGRUserDefaults.h"

@class StartAtLoginController;
@class KeyListener;

@interface LockMeNowAppDelegate : NSObject <NSApplicationDelegate>
{
	StartAtLoginController *loginController;
}

@property (weak) IBOutlet NSWindow		*window;
@property (weak) IBOutlet NSMenu		*statusMenu;
@property (weak) IBOutlet NSTabView     *tabView;
@property (weak) IBOutlet KeyListener   *keyListener;

@property (weak) IBOutlet NSImageView	*bluetoothStatus;

@property (weak) IBOutlet NSView        *lockBlockView;
@property (weak) IBOutlet NSButton      *donateButton;

@property (weak) IBOutlet NSButton              *sendMailCheckbox;
@property (weak) IBOutlet NSProgressIndicator   *patchASLProgress;

@property (weak) IBOutlet NSTextField   *aboutText;

// Status Item
@property (strong, nonatomic) NSStatusItem *statusItem;

- (IBAction)doUnLock:(id)sender;
- (IBAction)doLock:(id)sender;

- (IBAction)goToURL:(id)sender;

- (IBAction)openPrefs:(id)sender;
- (IBAction)changeDevice:(id)sender;

- (IBAction)setMonitoringUSBDevice:(id)sender;
- (IBAction)setMonitoringBluetooth:(id)sender;

- (IBAction)setMenuIcon:(id)sender;

- (NSString *)takePhoto;

@end
