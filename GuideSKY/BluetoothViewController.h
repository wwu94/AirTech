//
//  UIViewController+Bluetooth.h
//  AirTech
//
//  Created by WuWenjun on 4/14/17.
//  Copyright © 2017 Georgia Tech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLE.h"

@interface BluetoothViewController: UIViewController <BLEDelegate>
{
    BLE *bleShield;
    UIActivityIndicatorView *activityIndicator;
    
}
@property (strong, nonatomic) IBOutlet UITableView *table;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activity;
@property (weak, nonatomic) IBOutlet UIButton *btnConnect;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
