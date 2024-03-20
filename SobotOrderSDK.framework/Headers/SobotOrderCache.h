//
//  SobotOrderCache.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/3/21.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCommon.h>
#import <SobotCommon/SobotBaseEntity.h>

#define OrderBundelName @"SobotOrder"
// 链接点击
typedef BOOL (^SobotOrderLinkClickBlock)(id _Nullable object,NSString *_Nullable linkUrl);;

// 页面事件监听
typedef void (^SobotOrderPageLoadBlock)(id _Nullable object,int type);

NS_ASSUME_NONNULL_BEGIN

@interface SobotOrderCache : NSObject

+(SobotOrderCache *) shareSobotOrderCache;

// 存储自定义颜色等信息，此处没有指定类型，不会导致反向引用问题
@property(nonatomic,strong) id sobotKitConfig;


// 存储呼叫信息
@property(nonatomic,strong) SobotCacheEntity *sobotOrderConfig;


@property(nonatomic,strong) NSMutableDictionary *orderDictFrom;

-(NSString *)localOrderString:(NSString *) key;
+(UIImage *)getOrderSysImage:(NSString *)imageName;

-(void)outLoginStatus:(void(^)(int code,NSDictionary *result)) resultBlcok;
-(void)outLoginStatusWithBack:(BOOL) goBack;

// 链接点击
@property(nonatomic,copy) SobotOrderLinkClickBlock linkClickBlock;

// 页面事件监听
@property(nonatomic,copy) SobotOrderPageLoadBlock pageLoadBlock;


-(void)doLogin:(NSString * _Nullable) loginAcount pwd:(NSString *  _Nullable) loginPwd token:(NSString *  _Nullable) token result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;

// 查询登录信息
-(SobotLoginEntity *) getLoginUser;
-(BOOL) isLogin;

+(BOOL)validateAllChinese:(NSString *)content;

-(NSString *)getOrderSourceName:(int) code;

@end

NS_ASSUME_NONNULL_END
