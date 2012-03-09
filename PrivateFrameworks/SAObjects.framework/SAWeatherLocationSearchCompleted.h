/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * weatherLocations;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;

- (id)groupIdentifier;
- (id)weatherLocations;
- (id)initWithWeatherLocations:(id)arg1;
- (void)setWeatherLocations:(id)arg1;
- (id)encodedClassName;

@end