//
//  OrderModel.h
//  SDK
//
//  Created by Single on 2019/8/21.
//  Copyright © 2019 Single. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OrderModel : NSObject
@property (nonatomic,strong)NSString * startTime; // 用车时间
@property (nonatomic,strong)NSString * timeOfDuration;//持续时间
@property (nonatomic,strong)NSString * bookTime;//预约用车时间
@property (nonatomic,strong)NSString * bookDate;//表示周期预约日期
@property (nonatomic,strong)NSString * bookWeek;//预约周期
@property (nonatomic,strong)NSString * endTime;//空调和除霜结束时间
@property (nonatomic,strong)NSString * bookDays;//表示预约命令的执行周期
@property (nonatomic,strong)NSString * tempNum; //温度值
@property (nonatomic,strong)NSString * seatesChoose;//P2表示位置，1表示主驾驶位，2表示副驾驶位，3表示主驾驶和副驾驶位；
@property (nonatomic,strong)NSString * mGears; // 表示主驾驶位档位，1~3表示一到三档，C为加热和预约加热时生效
@property (nonatomic,strong)NSString * fGears;//P8表示副驾驶位档位，1~3表示一到三档，C为加热和预约加热时生效；
@property (nonatomic,strong)NSString * socString; //SOC电量设置
@property (nonatomic,strong)NSString * chargeEndTime; //充电结束时间
@property (nonatomic,strong)NSString * batteryKeepHot; //电池保温
@property (nonatomic,strong)NSString * bookToken;//用来取消预约
@property (nonatomic,strong)NSString * endWeek;//结束周期（仅充电预约）
+ (instancetype) shared;
- (instancetype)init;


@end

NS_ASSUME_NONNULL_END
