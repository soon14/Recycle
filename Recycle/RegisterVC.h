//
//  RegisterVC.h
//  Recycle
//
//  Created by mac on 16/5/12.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RegisterVC : UIViewController
@property (nonatomic,copy)void(^pswNameBlock)(NSString*psw,NSString*name);
@end
