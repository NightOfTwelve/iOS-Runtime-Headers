/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileFollowButton : UIControl {
    double  _animationDuration;
    _UIBackdropView * _backdropView;
    MusicMediaDetailTintInformation * _detailTintInformation;
    BOOL  _following;
    NSString * _followingText;
    NSString * _initialText;
    float  _maximumWidth;
    int  _style;
    UILabel * _titleLabel;
}

@property (nonatomic) double animationDuration;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic) BOOL following;
@property (nonatomic, copy) NSString *followingText;
@property (nonatomic, copy) NSString *initialText;
@property (nonatomic) float maximumWidth;
@property (nonatomic) int style;

+ (float)defaultHeight;

- (void).cxx_destruct;
- (float)_followingButtonBackdropViewAlphaForState:(BOOL)arg1 withStyle:(int)arg2;
- (float)_followingButtonBackdropViewColorTintAlphaForState:(BOOL)arg1 withStyle:(int)arg2;
- (id)_followingButtonBackgroundColorForState:(BOOL)arg1 withStyle:(int)arg2;
- (id)_followingButtonBorderColorForState:(BOOL)arg1 withStyle:(int)arg2;
- (id)_followingButtonShadowColorForState:(BOOL)arg1 withStyle:(int)arg2;
- (id)_followingButtonTextBlendModeForState:(BOOL)arg1 withStyle:(int)arg2;
- (id)_followingButtonTextColorForState:(BOOL)arg1 withStyle:(int)arg2;
- (void)_updateButtonForCurrentFollowingStateAnimated:(BOOL)arg1;
- (void)_updateButtonForHighlighted:(BOOL)arg1;
- (void)_updateButtonForStyle;
- (void)_updateButtonSize;
- (void)_updateForState:(BOOL)arg1 withStyle:(int)arg2;
- (void)_updateLabelSize;
- (void)_updateLabelString;
- (double)animationDuration;
- (id)detailTintInformation;
- (BOOL)following;
- (id)followingText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (id)initialText;
- (void)layoutSubviews;
- (float)maximumWidth;
- (void)setAnimationDuration:(double)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setFollowing:(BOOL)arg1;
- (void)setFollowing:(BOOL)arg1 animated:(bool)arg2;
- (void)setFollowingText:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setInitialText:(id)arg1;
- (void)setMaximumWidth:(float)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)tintColorDidChange;

@end
