//
//  N60SDK.h
//  N60SDK
//
//  Created by Single on 2019/8/5.
//  Copyright © 2019 Single. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OrderModel.h"
//连接状态
//定义枚举类型

//@class OrderModel;

@interface N60SDK : NSObject
typedef enum _OrderState {
    OnAirConditioner = 0, //开启空调
    OffAirConditioner,    //关闭空调
    OnLockCar,            //开锁
    OffLockCar,           //闭锁
    OnLockTailDoor,       //开尾门
    OffLockTailDoor,      //关尾门
    OpenWindow,           //开车窗
    CloseWindow,         //关车窗
    OpenTopWidow,        //开天窗
    CloseTopWindow,      //关天窗
    CarSearching,         //寻车
    OnDefrost,             //除霜开启
    OffDefrost,            //除霜关闭
    OnCharging,           //开启充电
    OffCharging,          //关闭充电
    OnSeateHot,           //开启座椅加热
    OffSeateHot,         //关闭座椅加热
    OnSeateAir,          //开启座椅通风
    OffSeateAir,         //关闭座椅通风
    OnBatteryHot,       //开启电池加热
    OffBatteryHot,      // 关闭电池加热
    OnbookCharge,       //开启预约充电
    OffbookCharge,      //关闭预约充电
    OnBookAirConditioner, //开启预约空调
    OffBookAirConditioner, //关闭预约空调
    OnBookDefrost,         //预约开启除霜
    OffBookDefrost,        //预约关闭除霜
    OnBookSeateHot,    //预约开启座椅加热
    OffBookSeateHot, //预约关闭座椅加热
    OnBookSeateAir,          //预约开启座椅通风
    OffBookSeateAir,         //预约关闭座椅通风
    OnBookBatteryHot,       //预约开启电池加热
    OffBookBatteryHot,      //预约 关闭电池加热
//    Tirepressure
    TirePressureInfo, // 胎压信息
    ChargeSOC,       //充电soc
    OnChargingInsulation, // 开启充电保温
    OffChargingInsulation, // 关闭充电保温
    OnLampDelayTime,     //开启大灯延时关闭
    OffLampDelayTime,    //关闭大灯延时关闭
    OnChairGuestsState,  //设置方向盘和座位迎宾 开启
    OffChairGuestsState, //设置方向盘和座位迎宾 关闭
    OnLockPepsState,   //感应式PEPS解闭锁开启
    OffLockPepsState,   //感应式PEPS解闭锁关闭
    OnFootTrunkState, // 脚踢尾门开启
    OffFootTrunkState, // 脚踢尾门关闭
    BatteryHotStopSoc,// 动力电池加热截止SOC
    ChargeEndTime, //充电结束时间
} OrderState;

+ (N60SDK *)sharedInstance;
//连接scoket 并传入VIN码
@property NSString * vinCode;
-(void)ContentWithVin:(NSString *)vinCode status:(void (^)(BOOL status))status error:(void (^)(NSError *))error;
-(void)OnLineStatusstatus:(void(^)(BOOL status))status error:(void (^)(NSError *))error;//在线状态查询
-(void)GetCarInfo:(void(^)(NSDictionary * info))info error:(void (^)(NSError *))error;//车辆信息查询
-(void)ReloadContent:(NSString *)vinCode status:(void(^)(BOOL status))status;//重新连接
-(void)RealTimeDataQuery:(void(^)(NSDictionary * info))info;//事实数据查询
-(void)RealTimeCarInfo:(void (^)(NSDictionary *))info error:(void (^)(NSError *))error;
-(void)DisContant;//断开连接
-(void)SendNormalOrder:(OrderState)order category:(NSString *)categoryStr info:(void(^)(NSDictionary * info))info error:(void(^)(NSError * error))error; //发送简单的指令
//category 为参数选择  body中的p1 或者p2
-(void)SendOrder:(OrderState)orde model:(OrderModel *)model info:(void(^)(NSDictionary * info))info error:(void(^)(NSError * error))error;
-(void)SctiveReportingResult:(void(^)(NSDictionary * info))info;
-(void)CheckTripInfo;

@end
