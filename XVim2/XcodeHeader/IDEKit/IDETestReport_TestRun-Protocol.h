//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDETestReport_Common-Protocol.h>

@class IDESchemeActionRunDestinationRecord, NSArray, NSString;
@protocol IDETestReport_Device;

@protocol IDETestReport_TestRun <IDETestReport_Common>
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_testReport_testRun_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_activities;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintPath;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintName;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_failureSummaries;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_UUID;
@property(readonly, nonatomic) id <IDETestReport_Device> ide_testReport_testRun_testedDevice;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_runName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testName;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_perfMetrics;
- (void)ide_testReport_testRun_schemeActionsInvocationRecord:(void (^)(IDESchemeActionsInvocationRecord *, NSError *))arg1;
@end

