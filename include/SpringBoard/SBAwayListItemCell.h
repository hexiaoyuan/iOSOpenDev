/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class SBAwayBulletinListController, UIImageView, SBBulletinCellContentViewBase;

@interface SBAwayListItemCell : SBUnknownSuperclass {
	UIImageView *_separator;	// 244 = 0xf4
	UIImageView *_iconImageView;	// 248 = 0xf8
	SBBulletinCellContentViewBase *_cellContentView;	// 252 = 0xfc
	SBAwayBulletinListController *_controller;	// 256 = 0x100
	BOOL _shouldBlinkIcon;	// 260 = 0x104
}
@property(assign, nonatomic) BOOL shouldBlinkIcon;	// G=0x18aead; S=0x18c515; @synthesize=_shouldBlinkIcon
+ (float)_rowHeightForContentHeight:(float)contentHeight;	// 0x18efcd
+ (float)_contentWidthForRowWidth:(float)rowWidth;	// 0x18c595
+ (float)_cellIconLeftPadding;	// 0x18c5e1
+ (float)_cellContentLeftPadding;	// 0x18c629
+ (float)_cellContentRightPadding;	// 0x18c671
+ (float)_cellContentTopPadding;	// 0x18ae8d
+ (float)_cellContentExtraPadding;	// 0x18c6b9
- (BOOL)_hasBackgroundColor;	// 0x18c235
- (void)_addIconBlinkAnimation;	// 0x18c271
- (void)_removeIconBlinkAnimation;	// 0x18c3f9
- (void)_createContentView;	// 0x18ae95
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x18f2f5
- (void)dealloc;	// 0x18ef29
- (void)setIconImage:(id)image;	// 0x18c439
// declared property setter: - (void)setShouldBlinkIcon:(BOOL)blinkIcon;	// 0x18c515
- (void)setTitle:(id)title;	// 0x18c54d
- (void)setMessage:(id)message;	// 0x18c571
- (void)layoutSubviews;	// 0x18f131
- (BOOL)_drawsSeparator;	// 0x18ae99
- (CGRect)_contentRect;	// 0x18f0ed
- (CGRect)_cellContentViewFrame;	// 0x18f011
- (void)setController:(id)controller;	// 0x18ae9d
// declared property getter: - (BOOL)shouldBlinkIcon;	// 0x18aead
@end
