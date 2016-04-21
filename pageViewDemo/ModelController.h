//
//  ModelController.h
//  pageViewDemo
//
//  Created by Khushboo Sharma on 4/21/16.
//  Copyright © 2016 Khushboo Sharma. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

