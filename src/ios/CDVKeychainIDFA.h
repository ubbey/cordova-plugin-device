#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVPluginResult.h>

@interface CDVKeychainIDFA : CDVPlugin

- (void)getDeviceID:(CDVInvokedUrlCommand*)command;
- (NSString *)getMyDeviceID;
- (void)deleteDeviceID:(CDVInvokedUrlCommand*)command;

@end
