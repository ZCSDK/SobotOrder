//
//  SobotOrderKitInfo.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/3/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotKitConfig : NSObject


/// 暂未使用
@property(nonatomic,strong) UIColor *viewBackgroundColor;

// 登录失败时，是否显示弹退出登录弹窗
@property(nonatomic,assign)BOOL isShowExitAlterView;

// 是否使用用户SDK，如果使用 创建工单不在使用 自己的用户页面，将使用用户中心SDK的页面
@property(nonatomic,assign) BOOL isAddUserSDK;

@end

NS_ASSUME_NONNULL_END
