//
//  TableViewController.h
//  FlashyTableViews
//
//  Created by Salmaan Rizvi on 6/29/16.
//  Copyright © 2016 Rizvi Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"
#import "UIScrollView+APParallaxHeader.h"

@interface TableViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, SWTableViewCellDelegate, APParallaxViewDelegate>

@end
