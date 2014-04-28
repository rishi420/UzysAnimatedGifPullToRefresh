//
//  UIScrollView+UzysAnimatedGifPullToRefresh.h
//  UzysAnimatedGifPullToRefresh
//
//  Created by Uzysjung on 2014. 4. 8..
//  Copyright (c) 2014년 Uzys. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UzysAnimatedGifActivityIndicator.h"
@interface UIScrollView (UzysAnimatedGifPullToRefresh)
@property (nonatomic,assign) BOOL showPullToRefresh;
@property (nonatomic,assign) BOOL showAlphaTransition;
@property (nonatomic,strong) UzysAnimatedGifActivityIndicator *pullToRefreshView;

//테스트
//- (void)addPullToRefreshActionHandler:(actionHandler)handler;


- (void)addPullToRefreshActionHandler:(actionHandler)handler
                       ProgressImages:(NSArray *)progressImages
                        LoadingImages:(NSArray *)loadingImages
                    ProgressScrollThreshold:(NSInteger)threshold
               LoadingImagesFrameRate:(NSInteger)lframe;

- (void)addPullToRefreshActionHandler:(actionHandler)handler
                       ProgressImages:(NSArray *)progressImages
              ProgressScrollThreshold:(NSInteger)threshold;

- (void)addPullToRefreshActionHandler:(actionHandler)handler
                ProgressImagesGifName:(NSString *)progressGifName
                 LoadingImagesGifName:(NSString *)loadingGifName
              ProgressScrollThreshold:(NSInteger)threshold;

- (void)addPullToRefreshActionHandler:(actionHandler)handler
                ProgressImagesGifName:(NSString *)progressGifName
              ProgressScrollThreshold:(NSInteger)threshold;
- (void)addPullToRefreshActionHandler:(actionHandler)handler
                ProgressImagesGifName:(NSString *)progressGifName
                 LoadingImagesGifName:(NSString *)loadingGifName
              ProgressScrollThreshold:(NSInteger)threshold
                LoadingImageFrameRate:(NSInteger)frameRate;

- (void)triggerPullToRefresh;
- (void)stopRefreshAnimation;
@end