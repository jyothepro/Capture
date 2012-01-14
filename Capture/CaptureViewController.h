//
//  CaptureViewController.h
//  Capture
//
//  Created by Jyothidhar Pulakunta on 1/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CaptureViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *webView;
- (IBAction)captureScreen:(id)sender;

@end
