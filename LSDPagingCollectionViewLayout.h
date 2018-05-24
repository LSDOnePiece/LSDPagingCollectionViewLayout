//
//  LSDPagingCollectionViewLayout.h
//  EasyToBuy
//
//  Created by 神州锐达 on 2018/5/24.
//  Copyright © 2018年 OnePiece. All rights reserved.
//

#import <UIKit/UIKit.h>
//横向滚动横向排布的layout
@interface LSDPagingCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) CGFloat minimumLineSpacing; //行间距

@property (nonatomic) CGFloat minimumInteritemSpacing; //item间距

@property (nonatomic) CGSize itemSize; //item大小

@property (nonatomic) UIEdgeInsets sectionInset;

- (instancetype)init;


@end
