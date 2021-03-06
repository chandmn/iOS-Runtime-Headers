/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPersistenceManager : NSObject

+ (BOOL)createMuidMappingDirectoryForPath:(id)arg1 WithError:(id*)arg2;
+ (BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 atPath:(id)arg3 error:(id*)arg4;
+ (BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 version:(id*)arg3 atPath:(id)arg4 error:(id*)arg5;
+ (BOOL)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 toPath:(id)arg3 error:(id*)arg4;

@end
