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


#import <Foundation/Foundation.h>
#import <avs/AVSMediaManager.h>



extern NSString *const MediaManagerSoundOutgoingKnockSound;
extern NSString *const MediaManagerSoundIncomingKnockSound;
extern NSString *const MediaManagerSoundUserLeavesVoiceChannelSound;
extern NSString *const MediaManagerSoundMessageReceivedSound;
extern NSString *const MediaManagerSoundFirstMessageReceivedSound;
extern NSString *const MediaManagerSoundSomeoneJoinsVoiceChannelSound;
extern NSString *const MediaManagerSoundReadyToTalkSound;
extern NSString *const MediaManagerSoundTransferVoiceToHereSound;
extern NSString *const MediaManagerSoundUserJoinsVoiceChannelSound;
extern NSString *const MediaManagerSoundRingingFromMeSound;
extern NSString *const MediaManagerSoundRingingFromMeVideoSound;
extern NSString *const MediaManagerSoundRingingFromThemSound;
extern NSString *const MediaManagerSoundRingingFromThemInCallSound;
extern NSString *const MediaManagerSoundCallDropped;
extern NSString *const MediaManagerSoundAlert;
extern NSString *const MediaManagerSoundCamera;
extern NSString *const MediaManagerSoundSomeoneLeavesVoiceChannelSound;


FOUNDATION_EXPORT void MediaManagerPlayAlert(void);

@class Settings;

@interface AVSMediaManager (Additions)

+ (NSURL *)URLForSound:(NSString *)sound;

- (void)configureSounds;
- (void)configureDefaultSounds;

@end
