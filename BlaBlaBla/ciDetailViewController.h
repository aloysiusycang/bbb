//
//  ciDetailViewController.h
//  BlaBlaBla
//
//  Created by Aloysius Ang on 2/6/14.
//  Copyright (c) 2014 Aloysius Ang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ciDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
