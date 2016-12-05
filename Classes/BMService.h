//
//  BMService.h
//  BusMediator
//
//  Created by History on 16/12/5.
//  Copyright © 2016年 Tsing. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BMService <NSObject>
- (BOOL)canOpenURL:(NSURL *)URL;
@end

@protocol BMRouteService <NSObject, BMService>


@end
