/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class IMConnectionMonitor, NSString, NSArray;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {
    IMConnectionMonitor *_connectionMonitor;
    BOOL _lastPostedNetworkUp;
    NSString *_myIP;
    NSArray *_myIPs;
    struct __CFRunLoopSource { } *_runLoopSource;
    const struct __SCDynamicStore { } *_store;
}

@property(retain) IMConnectionMonitor * connectionMonitor;
@property(readonly) struct __SCDynamicStore { }* getDynamicStore;
@property(readonly) BOOL isNetworkUp;
@property BOOL lastPostedNetworkUp;
@property(retain) NSString * myIP;
@property(readonly) NSString * myIPAddress;
@property(readonly) NSArray * myIPAddresses;
@property(retain) NSArray * myIPs;
@property(readonly) unsigned short nextAvailablePort;
@property struct __CFRunLoopSource { }* runLoopSource;
@property struct __SCDynamicStore { }* store;

+ (void)disableNotifications;
+ (BOOL)enableNotifications;
+ (id)sharedNotifier;

- (void)_clearIPCache;
- (void)_clearSharedDNSService;
- (BOOL)_listenForChanges;
- (id)connectionMonitor;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (struct __SCDynamicStore { }*)getDynamicStore;
- (id)init;
- (BOOL)isNetworkUp;
- (BOOL)lastPostedNetworkUp;
- (id)myIP;
- (id)myIPAddress;
- (id)myIPAddresses;
- (id)myIPs;
- (unsigned short)nextAvailablePort;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (void)setConnectionMonitor:(id)arg1;
- (void)setLastPostedNetworkUp:(BOOL)arg1;
- (void)setMyIP:(id)arg1;
- (void)setMyIPs:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setStore:(struct __SCDynamicStore { }*)arg1;
- (struct __SCDynamicStore { }*)store;
- (void)systemDidWake;
- (void)systemWillSleep;

@end