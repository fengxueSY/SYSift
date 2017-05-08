//
//  TopSearchView.h
//  search
//
//  Created by 666gps on 2017/4/19.
//  Copyright © 2017年 666gps. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TopSiftViewDelegate <NSObject>

/**
 返回选择的值

 @param arrayIndex 数组的第几个
 @param alternativeArrayIndex 数组中alternativeArray这个字典中的value的第几个
 */
-(void)selectDataArrayIndex:(NSInteger)arrayIndex AlternativeArray:(NSInteger)alternativeArrayIndex;

@end

@interface TopSiftView : UIView<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic,strong) id<TopSiftViewDelegate>delegate;
@property (nonatomic,strong) NSArray * dataArray;
@property (nonatomic,strong) UITableView * listTableView;
@property (nonatomic,copy) void(^selectBlock)(NSInteger arrayIndex);
@property (nonatomic,strong) NSMutableArray * selectNumberArray;
@property (nonatomic,strong) UIButton * disButtonA;
@property (nonatomic,strong) NSMutableArray * buttonTitleArray;/**<保存每个按钮初始化时候的title*/

//初始化的时候传入参数frame的默认高不小于44，数组的格式为：数组的每个值都应该是一个字典，每个字典包含两个键值对，每个键值对的key分别为:buttonTitle(每个按钮的title) 和 alternativeArray（选项数组）
/*
     @[@{@"buttonTitle":@"1",@"alternativeArray":@[@"10",@"20",@"30",@"40",@"50"]},
 @{@"buttonTitle":@"2",@"alternativeArray":@[@"11",@"21",@"31",@"41",@"51",@"21",@"31",@"41",@"51"]},
     @{@"buttonTitle":@"3",@"alternativeArray":@[@"15",@"25"]}];
 */
-(instancetype)initWithFrame:(CGRect)frame DataArray:(NSArray *)dataArray;
@end
