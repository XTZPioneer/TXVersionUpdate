//
//  ViewController.m
//  TXVersionUpdateDemo
//
//  Created by  杭州信配iOS开发 on 2017/4/26.
//  Copyright © 2017年 张天雄. All rights reserved.
//

#import "ViewController.h"
#import "TXVersionUpdate.h"
@interface ViewController ()
@end
@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];

    //appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
    [TXVersionUpdateManager checkNewEditionWithAppID:@"" ctrl:self];
    //1种用法，系统Alert
    
    
    //appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
    [TXVersionUpdateManager checkNewEditionWithAppID:@"" CustomAlert:^(TXAppStoreInfoModel * appInfo) {
        NSLog(@"appInfo:%@",appInfo.version);
    }];//2种用法，自定义Alert
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
