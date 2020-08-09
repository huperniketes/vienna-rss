//
//  InfoPanelController.h
//  Vienna
//
//  Created by Steve on 4/21/06.
//  Copyright (c) 2004-2006 Steve Palmer. All rights reserved.
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

@import Cocoa;

NS_ASSUME_NONNULL_BEGIN

@protocol InfoPanelControllerDelegate

/**
 Tells the delegate that a URL will be opened.

 @param url The URL to open.
 */
- (void)infoPanelControllerWillOpenURL:(NSURL *)url;

@end

@interface InfoPanelController : NSWindowController

/**
 The info panel controller's delegate.
 */
@property (weak, nullable, nonatomic) id<InfoPanelControllerDelegate> delegate;

- (instancetype)initWithFolder:(NSInteger)folderId;

- (void)updateFolder;

@end

NS_ASSUME_NONNULL_END
