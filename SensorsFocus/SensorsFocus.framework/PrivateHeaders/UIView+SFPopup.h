//
//  UIView+SFPopup.h
//  SensorsFocus
//
//  Created by 张敏超🍎 on 2020/3/4.
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

#import <UIKit/UIKit.h>
#import "SFPopupModel.h"
#import "SFPopupActionProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SFPopup)

@property (nonatomic, strong) NSArray *sensorsdata_popupActions;

@property (nonatomic, strong) SFPopupElementModel *sensorsdata_elementModel;

@end

NS_ASSUME_NONNULL_END
