//
//  WTKTool.h
//  WTKWineMVVM
//
//  Created by 王同科 on 16/9/21.
//  Copyright © 2016年 王同科. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTKTool : NSObject

/**
 *  加入购物车动画 
 *  @param imageView    做动画的imgView
 *  @param time         动画时间
 */
+ (void)beginAddAnimationWithImageView:(UIImageView *)imageView
                         animationTime:(float)time
                            startPoint:(CGPoint)startP
                              endPoint:(CGPoint)endP;
/**
 *  播放添加购物车声音
 */
+ (void)playSound;

/**
 *  注册指纹验证
 */
+ (void) registTouchIDWithCompleteBlock:(void(^)(NSString *))block;

/**
 *  删除指纹
 */
+ (BOOL) delegateTouchID;

/**
 * 分享
 */
+ (void)shared;

@end