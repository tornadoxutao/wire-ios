// 
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
// 


#import <UIKit/UIKit.h>
#import "ProfileViewController.h"

@protocol ZMBareUser;

@class ZMConversation;
@class ProfileDetailsViewController;
@class AddContactsViewController;


@protocol ProfileDetailsViewControllerDelegate <NSObject>

- (void)profileDetailsViewController:(ProfileDetailsViewController *)profileDetailsViewController didSelectConversation:(ZMConversation *)conversation;
- (void)profileDetailsViewController:(ProfileDetailsViewController *)profileDetailsViewController didPresentAddContactsViewController:(AddContactsViewController *)addContactsViewController;
- (void)profileDetailsViewController:(ProfileDetailsViewController *)profileDetailsViewController wantsToBeDismissedWithCompletion:(dispatch_block_t)completion;

@end

@interface ProfileDetailsViewController : UIViewController

- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (instancetype)initWithUser:(id<ZMBareUser>)user conversation:(ZMConversation *)conversation context:(ProfileViewControllerContext)context NS_DESIGNATED_INITIALIZER;

@property (nonatomic, weak) id<ProfileDetailsViewControllerDelegate> delegate;

@end
