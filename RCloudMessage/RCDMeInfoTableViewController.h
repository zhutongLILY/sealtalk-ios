//
//  RCDMeInfoTableViewController.h
//  RCloudMessage
//
//  Created by litao on 15/11/4.
//  Copyright © 2015年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCDMeInfoTableViewController : UITableViewController<UIActionSheetDelegate,UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *NicknameLabel;

@property (weak, nonatomic) IBOutlet UILabel *PhoneNumberLabel;


@end