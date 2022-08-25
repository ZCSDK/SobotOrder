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

// 资源
#define SobotOrderGetImage(imageName) [SobotOrderCache getOrderSysImage:imageName bundleName:CallBundelName]
// 颜色
#define UIColorFromOrderModeColor(themeColorKey) [SobotUITools getSobotThemeModeColor:themeColorKey  bundleName:OrderBundelName]
#define UIColorFromOrderModeColorAlpha(themeColorKey,a) [SobotUITools getSobotThemeModeColor:themeColorKey alpha:a bundleName:OrderBundelName]

