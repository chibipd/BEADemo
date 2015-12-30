//
//  BankDashBoardViewController.h
//  BEA_Demo
//
//  Created by Dict on 15/11/26.
//  Copyright © 2015年 Dict. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CollectionViewCell.h"
#import "CacheManager.h"
#import "Banking.h"

@interface BankDashBoardViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

+(BankDashBoardViewController *)getInstance;

@end
