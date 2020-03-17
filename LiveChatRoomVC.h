//
//  LiveChatRoomVC.h
//  LNMobileProject
//
//  Created by ln007 on 2019/9/5.
//

#import "LNBaseCustomTableVC.h"
#import "ChatRoomListModel.h"
#import "DriverListModel.h"

NS_ASSUME_NONNULL_BEGIN



typedef NS_ENUM(NSUInteger, RoomType) {
    RoomTypeNormal,
    RoomTypeChance,
};
@class SVGABitmapLayer;
@interface LiveChatRoomVC : LNBaseVC
//离开房间
- (void)leaveRoom;
//获取房间信息
- (ChatRoomListData *)getRoomInfo;
@property (copy, nonatomic)NSArray *roomArray;
//更新房间麦位语音状态动画
- (void)updateSeatSpeakers:(NSArray<AgoraRtcAudioVolumeInfo*> *_Nonnull)speakers AudioStatus:(NSInteger)totalVolume;
- (void)sendTextMessage:(nullable NSString *)message withExt:(nullable NSDictionary *)ext;
@property(nonatomic,assign)RoomType roomType;
@property(nonatomic,copy)NSString *is_passWord;
@property(nonatomic,copy)NSString *roomId;
@end

NS_ASSUME_NONNULL_END
