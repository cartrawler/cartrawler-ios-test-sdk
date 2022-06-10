//
//  UINavigationController+CTViewController.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 05/05/2022.
//  Copyright © 2022 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTViewControllerProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationController (CTViewController) <CTViewControllerProtocol>

@property (nonatomic, strong) NSArray *stackViewControllers;
@property (nonatomic, strong) NSArray *originalViewControllers;

@end

NS_ASSUME_NONNULL_END
