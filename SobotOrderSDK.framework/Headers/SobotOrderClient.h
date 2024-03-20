//
//  SobotOrderClient.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/3/21.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCacheEntity.h>

NS_ASSUME_NONNULL_BEGIN
@protocol  SobotOrderClientDelegate <NSObject>

@optional
-(void)setTabHidde:(BOOL)isHidde;

@optional
-(void)gologin;
@end

typedef void(^SoboOrderCallBlock)(NSString *_Nullable userNick,NSString *_Nullable orderId,NSDictionary *_Nullable callDict ,int type, NSString *_Nullable customId);

typedef void(^GetCallInfoBlock)(NSDictionary *info);

@interface SobotOrderClient : NSObject

@property(nonatomic,weak)id <SobotOrderClientDelegate>delegate;

@property(nonatomic,copy) SoboOrderCallBlock callBlcok;


@property(nonatomic,copy) GetCallInfoBlock getCallInfoBlock;

+(SobotOrderClient *) getSobotOrderClient;

-(void)initSDKWith:(NSString *) apiHost config:(SobotCacheEntity *)config;

-(NSString *)getCurApiHost;


+(BOOL) isLogin;

+(NSString *)sobotGetSDKVersion;

+(NSString *)sobotGetSDKChannel;

+(void)showDebug:(BOOL) showDebug;




@end

NS_ASSUME_NONNULL_END
