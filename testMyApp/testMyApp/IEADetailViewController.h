//
//  IEADetailViewController.h
//  testMyApp
//
//  Created by Иванов Евгений on 05.09.13.
//  Copyright (c) 2013 Иванов Евгений. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IEADetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
