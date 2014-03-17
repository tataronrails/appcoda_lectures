//
//  SimpleTableViewController.h
//  lection4
//
//  Created by Ilnur Gazizullin on 18.02.14.
//  Copyright (c) 2014 tor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@end
