//
//  SobotOrderFileEntity.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/4/1.
//

#import <SobotOrderSDK/SobotOrderDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotOrderFileEntity : SobotBaseEntity

// 名称
@property (nonatomic,strong) NSString *fileName;
// 本地路径
@property (nonatomic,strong) NSString *filePath;

@property (nonatomic,strong) NSString *fileNumKey;
@property (nonatomic,strong) NSString *fileType;
@property (nonatomic,strong) NSString *fileUrl;

@property (nonatomic,strong) NSString *converPath;

@end

NS_ASSUME_NONNULL_END
