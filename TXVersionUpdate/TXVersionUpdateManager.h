//
//  TXVersionUpdateManager.h
//  TXVersionUpdate
//
//  Created by  杭州信配iOS开发 on 2017/4/26.
//  Copyright © 2017年 张天雄. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class TXAppStoreInfoModel;
typedef void(^CheckVersionBlock)(TXAppStoreInfoModel *appInfo);

@interface TXVersionUpdateManager : NSObject
/**
 *  检测新版本(使用系统默认提示框)
 *
 *  appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
 *  containCtrl: 提示框显示在哪个控制器上
 */
+(void)checkNewEditionWithAppID:(NSString *)appID ctrl:(UIViewController *)containCtrl;

/**
 *  检测新版本(使用自定义提示框)
 *
 *   appID应用在Store里面的ID (应用的AppStore地址里面可获取)
 *   checkVersionBlock AppStore上版本信息回调block
 */
+(void)checkNewEditionWithAppID:(NSString *)appID CustomAlert:(CheckVersionBlock)checkVersionBlock;


@end
