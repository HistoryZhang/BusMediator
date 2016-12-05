//
//  BusMediator.h
//  BusMediator
//
//  Created by History on 16/12/5.
//  Copyright © 2016年 Tsing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BusMediator : NSObject
- (id)createService:(Protocol *)protocol;
@end
