//
//  FirstViewController.h
//  SQL
//
//  Created by Dan on 01/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kPostURL @"http://localhost/tutorialTest.php"
#define kName @"name"
#define kMessage @"message"

@interface FirstViewController : UIViewController{
    
    IBOutlet UITextField *nameText;
    IBOutlet UITextView *messageText;
    NSURLConnection *postConnection;
    
}
-(void) postMessage:(NSString*) message withName:(NSString *) name;
-(IBAction)post:(id)sender;

@end
