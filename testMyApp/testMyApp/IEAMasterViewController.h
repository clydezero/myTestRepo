//
//  IEAMasterViewController.h
//  testMyApp
//
//  Created by Иванов Евгений on 05.09.13.
//  Copyright (c) 2013 Иванов Евгений. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IEADetailViewController;

@interface IEAMasterViewController : UITableViewController

@property (strong, nonatomic) IEADetailViewController *detailViewController;

@end
