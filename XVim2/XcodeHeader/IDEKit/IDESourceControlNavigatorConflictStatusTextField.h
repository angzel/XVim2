//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStructuredLayoutTextField.h>

@class NSNumber;

@interface IDESourceControlNavigatorConflictStatusTextField : DVTStructuredLayoutTextField
{
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingConflictStateForUpdateOrMerge;
- (BOOL)hasDisplayableStatus;
- (id)cell;
- (void)setHidden:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(copy, nonatomic) NSNumber *conflictStateForUpdateOrMerge;
- (BOOL)allowsVibrancy;
- (id)init;

@end
