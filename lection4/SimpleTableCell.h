//
//  SimpleTableCell.h
//  lection4
//
//  Created by Ilnur Gazizullin on 21.02.14.
//  Copyright (c) 2014 tor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTimeLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
