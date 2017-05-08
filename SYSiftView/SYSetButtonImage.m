//
//  SYSetButtonImage.m
//  TopSiftView
//
//  Created by 666gps on 2017/5/8.
//  Copyright © 2017年 666gps. All rights reserved.
//

#import "SYSetButtonImage.h"

@implementation SYSetButtonImage

- (void)layoutSubviews {
    [super layoutSubviews];
    // 设置图片在文字的右边
    [self setTitleEdgeInsets:UIEdgeInsetsMake(0, - self.imageView.image.size.width, 0, self.imageView.image.size.width)];
    [self setImageEdgeInsets:UIEdgeInsetsMake(0, self.titleLabel.bounds.size.width + 10, 0, - self.titleLabel.bounds.size.width)];
}


@end
