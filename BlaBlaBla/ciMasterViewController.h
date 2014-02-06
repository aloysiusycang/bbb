//
//  ciMasterViewController.h
//  BlaBlaBla
//
//  Created by Aloysius Ang on 2/6/14.
//  Copyright (c) 2014 Aloysius Ang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ciDetailViewController;

@interface ciMasterViewController : UITableViewController

@property (strong, nonatomic) ciDetailViewController *detailViewController;

@end
