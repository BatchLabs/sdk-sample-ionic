//
//  BatchBridge.h
//  bridge
//
//  https://batch.com
//  Copyright (c) 2014 Batch SDK. All rights reserved.
//
//

#import <Foundation/Foundation.h>

#import "BatchBridgeCallback.h"
#import "BACSimplePromise.h"

#define SET_CONFIG                  	@"setConfig"
#define START                       	@"start"
#define OPT_IN                          @"optIn"
#define OPT_OUT                         @"optOut"
#define OPT_OUT_AND_WIPE_DATA           @"optOutAndWipeData"
#define GET_CUSTOM_USER_ID          	@"getCustomID"
#define SET_CUSTOM_USER_ID          	@"setCustomID"
#define GET_APP_LANGUAGE            	@"getAppLanguage"
#define SET_APP_LANGUAGE            	@"setAppLanguage"
#define GET_APP_REGION              	@"getAppRegion"
#define SET_APP_REGION              	@"setAppRegion"
#define PUSH_GET_LAST_KNOWN_TOKEN      	@"push.getLastKnownPushToken"
#define SET_GCM_SENDER_ID           	@"push.setGCMSenderID"
#define SET_IOSNOTIF_TYPES          	@"push.setIOSNotifTypes"
#define SET_ANDROIDNOTIF_TYPES      	@"push.setAndroidNotifTypes"
#define REGISTER_NOTIFS             	@"push.register"
#define DISMISS_NOTIFS              	@"push.dismissNotifications"
#define CLEAR_BADGE                 	@"push.clearBadge"

#define USER_EDIT                       @"user.edit"
#define USER_TRACK_EVENT                @"user.track.event"
#define USER_TRACK_TRANSACTION          @"user.track.transaction"
#define USER_TRACK_LOCATION             @"user.track.location"
#define USER_DATA_DEBUG                 @"user.data.debug"
#define USER_GET_INSTALLATION_ID        @"user.getInstallationID"

#define MESSAGING_SET_DND_ENABLED       @"messaging.setDoNotDisturbEnabled"
#define MESSAGING_SHOW_PENDING_MSG      @"messaging.showPendingMessage"

#define INBOX_FETCH                     @"inbox.fetch"
#define INBOX_FETCH_FOR_USER_ID         @"inbox.fetchForUserIdentifier"


/*!
 @class BatchBridge
 
 Sort of JSON RPC for Batch
 */
@interface BatchBridge : NSObject

/*!
 @method call:withParameters:callback:
 @abstract Perform an action and callback.
 @param action      :   The available action string (see static ennumeration).
 @param params      :   JSON compatible map of parameters.
 @param callback    :   The object to call back on. @see BatchBridgeCallback
 */
+ (BACSimplePromise<NSString*> *)call:(NSString *)action withParameters:(NSDictionary *)params callback:(id<BatchBridgeCallback>)callback;

@end
