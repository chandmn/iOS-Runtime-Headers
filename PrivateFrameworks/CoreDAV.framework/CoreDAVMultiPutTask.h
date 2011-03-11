/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVXMLData, NSString, NSDictionary, NSMutableDictionary;

@interface CoreDAVMultiPutTask : CoreDAVTask  {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    CoreDAVXMLData *_pushedData;
    BOOL _validCTag;
    NSString *_newCTag;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_hrefToETag;
}

@property(readonly) NSDictionary * hrefToETag;
@property(readonly) NSDictionary * uuidToHREF;
@property(readonly) NSString * newCTag;


- (void)dealloc;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4;
- (id)hrefToETag;
- (id)uuidToHREF;
- (id)newCTag;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end