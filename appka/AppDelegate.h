//
//  AppDelegate.h
//  appka
//
//  Created by Jiří Procházka on 27.01.13.
//  Copyright (c) 2013 Jiří Procházka. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

- (IBAction)submit:(id)sender;
- (IBAction)valueTwo:(id)sender;
@property (weak) IBOutlet NSTextField *textFieldOne;

@end
