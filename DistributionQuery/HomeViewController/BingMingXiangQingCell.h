//
//  BingMingXiangQingCell.h
//  DistributionQuery
//
//  Created by Macx on 17/5/3.
//  Copyright © 2017年 Macx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BingMingXiangQingCell : UITableViewCell
+(instancetype)cellWithTableView:(UITableView*)tableView IndexPath:(NSIndexPath *)indexPath;
@property(nonatomic,strong)UILabel * titleLabel;
@property(nonatomic,copy)NSString * text;
@end