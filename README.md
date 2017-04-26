# TXVersionUpdate
一个版本更新控制器

<集成>

pod 'TXVersionUpdate', '~> 0.0.1'

<使用方法>

#import <TXVersionUpdate/TXVersionUpdate.h>

- (void)viewDidLoad {

    [super viewDidLoad];
    
    //appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
    
    [TXVersionUpdateManager checkNewEditionWithAppID:@"" ctrl:self];
    //1种用法，系统Alert
    
    
    //appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
    [TXVersionUpdateManager checkNewEditionWithAppID:@"" CustomAlert:^(TXAppStoreInfoModel * appInfo) {
        NSLog(@"appInfo:%@",appInfo.version);
    }];//2种用法，自定义Alert
    
}
