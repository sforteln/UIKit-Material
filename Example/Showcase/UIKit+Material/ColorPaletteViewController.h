//
//  ColorPaletteViewController.h
//  UIKit+Material
//
//  Created by Tom Li on 6/7/14.
//  Copyright (c) 2014 Tom Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ColorPaletteViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) UITableView *tableView;
@property (strong, nonatomic) NSString *colorGroup;

- (instancetype)initWithColorGroup:(NSString *)colorGroup;

@end
