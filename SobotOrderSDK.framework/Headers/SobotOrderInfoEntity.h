//
//  SobotOrderEntity.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/3/23.
//

#import <SobotCommon/SobotBaseEntity.h>
#import "SobotOrderFileEntity.h"
NS_ASSUME_NONNULL_BEGIN
// dealHisList 内部对象
@class SobotOrderDetailEntity;
@class SobotOrderDealModel;
@class SobotOrderReplyModel;
@interface SobotOrderInfoEntity : SobotBaseEntity

@property(nonatomic ,strong) SobotOrderDetailEntity * orderDetail;
@property(nonatomic ,strong) NSMutableArray * combinFormDataList;
@property(nonatomic ,strong) NSString * faceImg;
@property(nonatomic ,strong) NSString * logFrom;
//"resultList": [{
//    "text": "工单分类",
//    "value": "分类8"
//}, {
//    "text": "优先级",
//    "value": "低"
//}]
@property(nonatomic ,strong) NSMutableArray * resultList;
@property(nonatomic ,strong) NSMutableArray * templateFieldList;
@property(nonatomic ,strong) NSMutableArray * defaultFieldList;
@property(nonatomic ,assign) int startType;
@property(nonatomic ,strong) NSString * updateServiceName;
@property(nonatomic ,strong) NSString * updateTime;
@property(nonatomic ,strong) NSString * updateTitle;

@property(nonatomic, strong) NSMutableArray *replyList; // 详情页回复数据使用
@property(nonatomic, strong) NSMutableArray *dealHisList;// 详情页历史数据使用

@end

@interface SobotOrderDetailEntity : SobotBaseEntity

// 工单机器人处理状态 0 纯人工处理（历史数据为null） 1 机器人处理 2 机器人处理后转人工处理
    // 状态为 1 时应当禁用编辑等功能
@property(nonatomic , assign) int robotHandleStatus;

//typedef enum kOrderModelType {
//    orderModelType_normal  = 0,
//    orderModelType_talk = 1,
//
//}kOrderModelType;
//

//@property (nonatomic,assign) kOrderModelType orderType;// 工单来源
@property(nonatomic , strong) NSString * createTime;//": 1463555932,
@property(nonatomic , strong) NSString * dealUserName;//": "张新耀",
@property(nonatomic , strong) NSString * startName;//": "zhangxy@sobot.com",
@property(nonatomic , strong) NSString * ticketCode;//": 1463555932,
@property(nonatomic , strong) NSString * ticketId;//": "d022a20720fd4da49266e2de5b0f44e0",

//低 0"  "中 1" 高 "2"  紧急 3
@property(nonatomic , assign) int        ticketLevel;//": 2,
@property(nonatomic , strong) NSString * ticketLevelText;//": 2,


//是否显示接单按钮  0 ：显示  1： 不显示
@property(nonatomic , assign) int         isShowReceipt;


//"尚未受理","0"  "受理中 1" 等待回复2" 已解决3"
@property(nonatomic , assign) int       ticketStatus;//": 0,
@property(nonatomic , strong) NSString * ticketStatusText;//": 0,
@property(nonatomic , strong) NSString * ticketTitle;//": "测试工单"
@property(nonatomic , strong) NSString * ticketDesc;//": "测试描述"

@property (nonatomic, strong) NSString *replyContent; //"我是工单内容吗地方是的是发顺丰的",
@property (nonatomic, strong) NSString *replyTime;    //1463555932,
@property (nonatomic, strong) NSString *replyUserName; //"zhangxy@sobot.com"

// 1 代表是开启了仅客服可见  0 代表是所有人可见
@property (nonatomic, assign) int      replyType; //"zhangxy@sobot.com"

// 工单关联的ID
@property (nonatomic, strong) NSString *customerId;// 抄送副本

@property (nonatomic, strong) NSString *userName;// 抄送副本
@property (nonatomic, strong) NSString *dealGroupName;//": "",
@property (nonatomic, strong) NSString *getTicketTime;//": 1463642469,
@property (nonatomic, strong) NSString *ticketType;//": 4

@property (nonatomic, strong) NSString *dealServerId;// 受理客服ID
@property (nonatomic, strong) NSString *dealGroupId;// 受理客服组ID

@property (nonatomic,copy) NSString *dealUserId;//接口返回的当前工单的受理客服ID

@property (nonatomic, strong) NSString *templateId;// 模板id
@property (nonatomic, strong) NSString *templateName;// 模板名称


@property (nonatomic, strong) NSString *updateTime;// 最近更新时间

//@property (nonatomic,strong) NSMutableArray * noOpenReslist; // 未开启的返回自定义字段数据

@property (nonatomic, strong) NSString *ticketContent;// 工单详情页 区头中的描述内容
@property (nonatomic, strong) NSString *cyUserId;// 抄送
@property (nonatomic, strong) NSString *cyUserMail;// 抄送
@property (nonatomic, strong) NSString *cyUserName;// 抄送
@property (nonatomic, strong) NSMutableArray * fileList;// 附件
@property (nonatomic, strong) NSString * ticketTypeName;// 工单的分类
@property (nonatomic, strong) NSString * orderUserId;// 对应客户
@property (nonatomic, strong) NSString * orderUserName;// 对应客户


@property (nonatomic,copy) NSString * email;// 工单来源的邮箱

@property (nonatomic,copy) NSString * tel;// 工单来源的电话

@property (nonatomic,copy) NSString * ticketFrom;// 工单来源
@property (nonatomic,copy) NSString * ticketFromName;// 工单来源

// 详情页区头显示工单模板字段使用
@property (nonatomic,strong) NSMutableArray *headerShowList;

@property (nonatomic, strong) NSMutableArray *resultList;// 自定义字段的数组
@property (nonatomic,strong) NSMutableArray * templateFieldList;// 模板字段，无值，分类里面的自定义字段 已开启的
@property (nonatomic,strong) NSMutableArray * defaultFieldList;// 自定义字段,是否显示
@property (nonatomic,copy) NSString * voiceUrl; // 语音留言的工单 语音文件的路径
@property(nonatomic , strong) NSString   *isConcerned; // 是否关注  1 ：关注  0 ： 未关注

@property(nonatomic,assign) int orderReplyType;// 工单回复类型

@property(nonatomic,strong) NSMutableArray *telArr;//回复工单记录电话号
@property(nonatomic,copy)NSString *userNick;// 回复工单记录用户昵称
//优先联络方式字段
//    //优先联系方式的类型 1: 邮箱 2：电话
//    private Integer firstContactType;
//    //优先联系方式的值
//    private String firstContactInfo;
@property(nonatomic,assign)int firstContactType;
@property(nonatomic,copy)NSString *firstContactInfo;

// 获取模板字段、非模板字段、停用字段集合
// 二维数组[@"1":模板arr，"2":非模板数组，”3“，停用字段arr]
-(NSMutableArray *)getShowOrderHeaderList;

@end

@interface SobotOrderDealModel : SobotBaseEntity
@property (nonatomic, strong) NSString *faceImg;
@property (nonatomic, strong) NSString *updateContent;
@property (nonatomic, strong) NSString *updateServiceName;
@property (nonatomic, strong) NSString *updateTime;
-(id)initWithMyDict:(NSDictionary *)dict;
@end

@interface SobotOrderReplyModel :SobotBaseEntity
@property (nonatomic, strong) NSString *dealLogId;//": "8dda294c7c2b4000b9b909ccc97ed04b",
@property (nonatomic, strong) NSString *dealUserName;//": "zhangxy@sobot.com",
@property (nonatomic, strong) NSString *faceImg;//": "http://img.sobot.com/console/common/face/admin.png",
@property (nonatomic, strong) NSMutableArray *fileList;
@property (nonatomic, strong) NSString *replyContent;//": "<p>我是工单内容吗地方是的是发顺丰的</p>",
@property (nonatomic, strong) NSString *replyTime;//": 1463555932,
// 0 所有人，1仅客服
@property (nonatomic, assign) int      replyType;//
@property (nonatomic, strong) NSString *replyTypeText;//

@property (nonatomic, assign) int      startType;//更新人类型：0客服，1普通用户 2触发器 3工单机器人


@property(nonatomic,assign) int dealLogType;// 回复类型 1 代表是语音回复
@property(nonatomic,copy) NSString *callRecordUrl;//呼叫录音地址
@property(nonatomic,copy) NSString *calledTel;//被呼叫的手机号
@property(nonatomic,copy) NSString *callId;//通话id
@property(nonatomic,assign) int duration;// 通话时长

-(id)initWithMyDict:(NSDictionary *)dict;
@end


NS_ASSUME_NONNULL_END
