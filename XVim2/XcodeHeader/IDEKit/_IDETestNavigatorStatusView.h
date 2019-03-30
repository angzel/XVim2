//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTTableCellViewStatusView-Protocol.h>

@class NSButton, NSImage, NSImageView, NSNumber, NSProgressIndicator;

@interface _IDETestNavigatorStatusView : DVTStructuredLayoutView <DVTTableCellViewStatusView>
{
    NSImageView *_statusImageView;
    NSButton *_button;
    NSProgressIndicator *_progressIndicator;
    NSImage *_statusImage;
    NSNumber *_backgroundStyle;
    BOOL _showProgressIndicator;
    BOOL _showRunIcon;
    BOOL _showStatusView;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
@property(nonatomic) BOOL showStatusView; // @synthesize showStatusView=_showStatusView;
@property(nonatomic) BOOL showRunIcon; // @synthesize showRunIcon=_showRunIcon;
@property(nonatomic) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
- (void).cxx_destruct;
@property(readonly) BOOL hasDisplayableStatus;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)setState:(unsigned long long)arg1 pendingRun:(BOOL)arg2;
@property(nonatomic) BOOL enableRunIcon;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) long long tableViewRowSizeStyle;

@end
