//
//  SobotOrderDefines.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/8/19.
//


#import <SobotCommon/SobotCommon.h>
#import <SobotOrderSDK/SobotOrderCache.h>

// 国际化
#define SobotOrderLocalString(key) [[SobotOrderCache shareSobotOrderCache] localOrderString:key]

static SobotTypeColor const SobotColorBgLineOF5  = @"SobotColorBgLineOF5";// 新增默认背景"#F5F5F5";


// 资源
#define SobotOrderGetImage(imageName) [SobotOrderCache getOrderSysImage:imageName]
// 颜色
#define UIColorFromOrderModeColor(themeColorKey) [SobotUITools getSobotThemeModeColor:themeColorKey  bundleName:OrderBundelName]
#define UIColorFromOrderModeColorAlpha(themeColorKey,a) [SobotUITools getSobotThemeModeColor:themeColorKey alpha:a bundleName:OrderBundelName]

