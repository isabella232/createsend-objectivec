//
//  CSCampaignSummary.h
//  CreateSend
//
//  Copyright (c) 2012 Freshview Pty Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSCampaignSummary : NSObject
@property (assign) NSUInteger recipientCount;
@property (assign) NSUInteger openedCount;
@property (assign) NSUInteger clickCount;
@property (assign) NSUInteger unsubscribedCount;
@property (assign) NSUInteger bouncedCount;
@property (assign) NSUInteger uniqueOpenedCount;
@property (assign) NSUInteger forwardsCount;
@property (assign) NSUInteger likesCount;
@property (assign) NSUInteger mentionsCount;
@property (copy) NSString *webVersionPage;

+ (id)campaignSummaryWithDictionary:(NSDictionary *)campaignSummaryDictionary;
@end