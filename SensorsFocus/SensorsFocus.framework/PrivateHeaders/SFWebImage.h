//
//  SFWebImage.h
//  SensorsFocus
//
//  Created by 张敏超🍎 on 2020/3/26.
//  Copyright © 2020 Sensors Data Co., Ltd. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#if ! __has_feature(objc_arc)
#error This file must be compiled with ARC. Either turn on ARC for the project or use -fobjc-arc flag on this file.
#endif

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (SFWebImage)

- (void)sensorsdata_setImageURLString:(NSString *)urlString;

@end

@interface UIButton (SFWebImage)

- (void)sensorsdata_setBackgroundImageURLString:(NSString *)urlString forState:(UIControlState)state;

@end

NS_ASSUME_NONNULL_END
