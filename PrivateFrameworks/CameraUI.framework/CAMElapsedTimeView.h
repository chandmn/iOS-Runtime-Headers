/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMElapsedTimeView : UIView {
    UIImageView * __recordingImageView;
    NSDate * __startTime;
    UILabel * __timeLabel;
    NSTimer * __updateTimer;
    int  _layoutStyle;
}

@property (nonatomic, readonly) UIImageView *_recordingImageView;
@property (nonatomic, readonly) NSDate *_startTime;
@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) NSTimer *_updateTimer;
@property (nonatomic) int layoutStyle;

- (void).cxx_destruct;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(int)arg1;
- (void)_endRecordingAnimation;
- (id)_recordingImageView;
- (void)_setStartTime:(id)arg1;
- (id)_startTime;
- (id)_timeLabel;
- (void)_updateFont;
- (void)_updateForTimer:(id)arg1;
- (void)_updateText;
- (id)_updateTimer;
- (void)dealloc;
- (void)endTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (int)layoutStyle;
- (void)layoutSubviews;
- (void)resetTimer;
- (void)setLayoutStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startTimer;
- (void)updateToContentSize:(id)arg1;

@end
