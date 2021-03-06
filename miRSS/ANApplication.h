//
//  ANApplication.h
//  miRSS
//
//  Created by Alex Nichol on 12/16/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ANCommandCounter.h"
#import "ANRemoteAccessManager.h"
#import "ANRSSFeed.h"
#import "ANRSSManager.h"
#import "RSSChannel.h"
#import "ANRSSArticle.h"
@interface NSApplication (anapplication)

- (NSScriptObjectSpecifier *)objectSpecifier;
- (NSArray *)rssfeeds;
- (void)insertInRssfeeds:(id)feed;
- (void)insertInRssfeeds:(id)feed atIndex:(unsigned)index;
- (void)removeFromRssfeedsAtIndex:(unsigned)index;

- (NSNumber *)feedcount;
- (NSNumber *)unread;

@end
