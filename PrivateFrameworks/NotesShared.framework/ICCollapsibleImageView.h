/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCollapsibleImageView : ICCollapsibleBaseView {
    struct UIImage { Class x1; } * _image;
    struct UIImageView { Class x1; } * _imageView;
    BOOL  _shouldEnableLetterpressIfSupported;
    struct UIColor { Class x1; } * _tintColor;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) BOOL shouldEnableLetterpressIfSupported;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)enableLetterpressIfSupported;
- (struct UIImage { Class x1; }*)image;
- (struct UIImageView { Class x1; }*)imageView;
- (void)performSetup;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageView:(struct UIImageView { Class x1; }*)arg1;
- (void)setShouldEnableLetterpressIfSupported:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (BOOL)shouldEnableLetterpressIfSupported;
- (struct UIColor { Class x1; }*)tintColor;

@end