//
//  RootViewController.h
//  pageViewDemo
//
//  Created by Khushboo Sharma on 4/21/16.
//  Copyright © 2016 Khushboo Sharma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

