/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationStore : NSObject <NCDebugInfoProvider> {
    NSMutableDictionary * _notificationSections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *notificationSections;
@property (nonatomic, readonly) unsigned int notificationsCount;
@property (nonatomic, readonly) unsigned int sectionsCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addNotificationRequest:(id)arg1;
- (id)coalescedNotificationForRequest:(id)arg1;
- (id)debugInfoPlist;
- (id)init;
- (id)notificationSections;
- (unsigned int)notificationsCount;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (unsigned int)sectionsCount;
- (void)setNotificationSections:(id)arg1;

@end