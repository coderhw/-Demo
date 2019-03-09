//
//  HHBaseDemo.h
//  线程同步
//
//  Created by Evan on 2018/6/7.
//  Copyright © 2018年 Vanke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MJBaseDemo : NSObject

- (void)moneyTest;
- (void)ticketTest;
- (void)otherTest;

#pragma mark - 暴露给子类去使用
- (void)__saveMoney;
- (void)__drawMoney;
- (void)__saleTicket;
@end
