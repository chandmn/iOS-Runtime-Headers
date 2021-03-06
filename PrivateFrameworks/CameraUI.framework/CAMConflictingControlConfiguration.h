/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMConflictingControlConfiguration : NSObject {
    int  _desiredFlashMode;
    int  _desiredHDRMode;
    int  _flashAndHDRConflictingControl;
}

@property (nonatomic, readonly) int desiredFlashMode;
@property (nonatomic, readonly) int desiredHDRMode;
@property (nonatomic, readonly) int flashAndHDRConflictingControl;

+ (void)resolveDesiredFlashMode:(int)arg1 desiredHDRMode:(int)arg2 primaryConflictingControl:(int)arg3 device:(int)arg4 toFlashMode:(int*)arg5 HDRMode:(int*)arg6;

- (int)desiredFlashMode;
- (int)desiredHDRMode;
- (int)flashAndHDRConflictingControl;
- (id)init;
- (id)initWithDesiredFlashMode:(int)arg1 desiredHDRMode:(int)arg2 flashAndHDRConflictingControl:(int)arg3;

@end
