#import <Foundation/Foundation.h>


@class GHFeed, GHUser;

@interface GHFeedEntry : NSObject {
	NSString *entryID;
	NSString *eventType;
	NSDate *date;
	NSURL *linkURL;
	NSString *title;
	NSString *content;
	NSString *authorName;
	GHFeed *feed;
	id eventItem;
}

@property (nonatomic, retain) NSString *entryID;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSURL *linkURL;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *authorName; 
@property (nonatomic, retain) GHFeed *feed;
@property (nonatomic, retain) id eventItem;
@property (nonatomic, readonly) GHUser *user;

@end