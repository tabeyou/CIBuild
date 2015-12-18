//
//  DetailViewController.h
//  CIBuild
//
//  Created by zhu peijun on 12/18/15.
//  Copyright © 2015 Nora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

