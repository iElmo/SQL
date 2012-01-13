//
//  SecondViewController.h
//  SQL
//
//  Created by Dan on 01/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kGETUrl @"http://localhost/getjson.php"

@interface SecondViewController : UITableViewController{
    
    NSMutableArray *json;
}

@end
