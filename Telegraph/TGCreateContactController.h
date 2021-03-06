/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGVCardUserInfoController.h"

@class TGCreateContactController;
@class TGContactMediaAttachment;

@protocol TGCreateContactControllerDelegate <NSObject>

@optional

- (void)createContactControllerDidFinish:(TGCreateContactController *)createContactController;

@end

@interface TGCreateContactController : TGVCardUserInfoController

@property (nonatomic, weak) id<TGCreateContactControllerDelegate> delegate;

- (instancetype)init;
- (instancetype)initWithUid:(int32_t)uid firstName:(NSString *)firstName lastName:(NSString *)lastName phoneNumber:(NSString *)phoneNumber attachment:(TGContactMediaAttachment *)attachment;
- (instancetype)initWithFirstName:(NSString *)firstName lastName:(NSString *)lastName phoneNumber:(NSString *)phoneNumber attachment:(TGContactMediaAttachment *)attachment;
- (instancetype)initWithUid:(int32_t)uid phoneNumber:(NSString *)phoneNumber existingUid:(int32_t)existingUid attachment:(TGContactMediaAttachment *)attachment;
- (instancetype)initWithUid:(int32_t)uid phoneNumber:(NSString *)phoneNumber existingNativeContactId:(int)existingNativeContactId attachment:(TGContactMediaAttachment *)attachment modal:(bool)modal;

@end
