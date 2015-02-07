//
//  ViewController.h
//  Laika Age
//
//  Created by Alfred on 6/2/15.
//  Copyright (c) 2015 Maptier. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *yearsLabel;
@property (strong, nonatomic) IBOutlet UITextField *yearsTextField;

- (IBAction)convertToDogYearsButtonPressed:(UIButton *)sender;


@end

