//
//  UIImage+RTL.h
//  FDFullScreenPopGestureDemo
//
//  Created by cs on 2018/10/20.
//  Copyright © 2018 cs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (RTL)

-(UIImage *) rtl;

-(UIImage *)ifRTLThenOrientationUpMirrored;

@end
