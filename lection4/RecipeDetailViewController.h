//
//  RecipeDetailViewController.h
//  lection4
//
//  Created by Ilnur Gazizullin on 11.03.14.
//  Copyright (c) 2014 tor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *recipeLabel;
@property (nonatomic, strong) NSString *recipeName;

@end
