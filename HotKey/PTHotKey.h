//
//  PTHotKey.h
//  Protein
//
//  Created by Quentin Carnicelli on Sat Aug 02 2003.
//  Copyright (c) 2003 Quentin D. Carnicelli. All rights reserved.
//
//  Contributors:
// 		Andy Kim

#import <Foundation/Foundation.h>
#import <Carbon/Carbon.h>

@class PTKeyCombo;

@interface PTHotKey : NSObject
{
	NSString*		mIdentifier;
	NSString*		mName;
	PTKeyCombo*		mKeyCombo;
	id				mTarget;
	SEL				mAction;

	UInt32		    mCarbonHotKeyID;
	EventHotKeyRef	mCarbonEventHotKeyRef;
}

- (id)initWithIdentifier: (id)identifier keyCombo: (PTKeyCombo*)combo;
- (id)init;

- (void)setIdentifier: (id)ident;
- (id)identifier;

- (void)setName: (NSString*)name;
- (NSString*)name;

- (void)setKeyCombo: (PTKeyCombo*)combo;
- (PTKeyCombo*)keyCombo;

- (void)setTarget: (id)target;
- (id)target;
- (void)setAction: (SEL)action;
- (SEL)action;

- (UInt32)carbonHotKeyID;
- (void)setCarbonHotKeyID: (UInt32)hotKeyID;

- (EventHotKeyRef)carbonEventHotKeyRef;
- (void)setCarbonEventHotKeyRef:(EventHotKeyRef)hotKeyRef;

- (void)invoke;

@end
