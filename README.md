# TXVersionUpdate
一个版本更新控制器

<集成>
pod 'TXVersionUpdate', '~> 0.0.1'

<使用方法>
- (void)viewDidLoad {
    [super viewDidLoad];
    [TXVersionUpdateManager checkNewEditionWithAppID:@"" ctrl:self];
    // Do any additional setup after loading the view, typically from a nib.
    [TXVersionUpdateManager checkNewEditionWithAppID:@"1188958096" CustomAlert:^(TXAppStoreInfoModel *appInfo) {
        NSLog(@"appInfo:%@",appInfo.releaseNotes);
    }];
}
