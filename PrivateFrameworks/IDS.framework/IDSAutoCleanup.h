/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAutoCleanup : NSObject {
    int  _accessCount;
    id /* block */  _cleanupBlock;
}

- (void)dealloc;
- (void)incrementAccessCount;
- (id)initWithBlock:(id /* block */)arg1;

@end