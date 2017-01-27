//
//  AppDelegate.h
//  mySIMBL
//
//  Created by Wolfgang Baird on 1/9/16.
//  Copyright © 2016 Wolfgang Baird. All rights reserved.
//

@import Foundation;
@import AppKit;
@import SIMBLManager;
#import <DevMateKit/DevMateKit.h>
#import "SGDirWatchdog.h"
#import "PFMoveApplication.h"
#import "StartAtLoginController.h"
#import "shareClass.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSMutableArray *watchdogs;
    shareClass *_sharedMethods;
}

@property IBOutlet NSWindow *window;
@property IBOutlet NSWindow *srcWin;
@property IBOutlet SUUpdater *updater;

// Tab views
@property IBOutlet NSView *tabMain;

@property IBOutlet NSView *tabAbout;
@property IBOutlet NSView *tabPlugins;
@property IBOutlet NSView *tabSIMBL;
@property IBOutlet NSView *tabPreferences;
@property IBOutlet NSView *tabSIP;
@property IBOutlet NSView *tabSources;
@property IBOutlet NSView *tabChanges;
@property IBOutlet NSView *tabSIMBLInfo;
@property IBOutlet NSView *tabUpdates;

// Plugins view
@property IBOutlet NSTableView *tblView;
@property IBOutlet NSTableView *sourcesAllTable;
@property IBOutlet NSTableView *sourcesRepoTable;

// Add source
@property IBOutlet NSButton *addsourcesAccept;
@property IBOutlet NSTextField *addsourcesTextFiled;

// Sources view
@property IBOutlet NSView *sourcesRoot;
@property IBOutlet NSView *sourcesBundle;
@property IBOutlet NSScrollView *sourcesURLS;
@property IBOutlet NSScrollView *sourcesPlugins;
@property IBOutlet NSButton *sourcesPush;
@property IBOutlet NSButton *sourcesPop;
@property IBOutlet NSButton *sourcestoRoot;
@property IBOutlet NSButton *sourcesAdd;
@property IBOutlet NSButton *sourcesRefresh;

// Tab bar items
@property IBOutlet NSButton *viewPlugins;
@property IBOutlet NSButton *viewPreferences;
@property IBOutlet NSButton *viewSources;
@property IBOutlet NSButton *viewAbout;
@property IBOutlet NSButton *viewChanges;
@property IBOutlet NSButton *viewUpdateCounter;
@property IBOutlet NSButton *viewSIMBL;
@property IBOutlet NSButton *feedbackButton;
@property IBOutlet NSButton *donateButton;
@property IBOutlet NSButton *reportButton;


// About view
@property IBOutlet NSTextField *appName;
@property IBOutlet NSTextField *appVersion;
@property IBOutlet NSTextField *appCopyright;
@property IBOutlet NSButton *gitButton;
@property IBOutlet NSButton *sourceButton;
@property IBOutlet NSButton *emailButton;
@property IBOutlet NSButton *webButton;
@property IBOutlet NSButton *showCredits;
@property IBOutlet NSButton *showChanges;
@property IBOutlet NSButton *showEULA;
@property IBOutlet NSTextView *changeLog;

// Preferences view
@property IBOutlet NSButton         *prefVibrant;
@property IBOutlet NSButton         *prefTips;
@property IBOutlet NSButton         *prefDonate;
@property IBOutlet NSButton         *prefWindow;
@property IBOutlet NSPopUpButton    *prefUpdateAuto;
@property IBOutlet NSPopUpButton    *prefUpdateInterval;
@property IBOutlet NSPopUpButton    *prefStartTab;

// SIMBL View
@property IBOutlet NSButton         *libValXcode;
@property IBOutlet NSButton         *libValSafari;

@property IBOutlet NSTextField      *SIMBLAgentText;
@property IBOutlet NSTextField      *SIMBLOSAXText;
    
@property IBOutlet NSButton         *SIMBLAgentToggle;
@property IBOutlet NSButton         *SIMBLTogggle;
@property IBOutlet NSPopUpButton    *SIMBLLogging;
@property IBOutlet NSButton         *SIPStatus;
@property IBOutlet NSScrollView     *blacklistScroll;

- (void)setBadge :(NSString*)toValue;
- (void)setupEventListener;
- (IBAction)pushView:(id)sender;
- (IBAction)popView:(id)sender;

@end

@interface NSToolTipManager : NSObject
{
    double toolTipDelay;
}
+ (id)sharedToolTipManager;
- (void)setInitialToolTipDelay:(double)arg1;
@end
