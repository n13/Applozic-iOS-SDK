//
//  DB_SMS.h
//  ChatApp
//
//  Created by Gaurav Nigam on 02/09/15.
//  Copyright (c) 2015 AppLogic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DB_FileMetaInfo;

@interface DB_SMS : NSManagedObject

@property (nonatomic, retain) NSString * contactId;
@property (nonatomic, retain) NSNumber * createdAt;
@property (nonatomic, retain) NSString * deviceKeyString;
@property (nonatomic, retain) NSString * filePath;
@property (nonatomic, retain) NSNumber * isRead;
@property (nonatomic, retain) NSNumber * isSent;
@property (nonatomic, retain) NSNumber * isSentToDevice;
@property (nonatomic, retain) NSNumber * isShared;
@property (nonatomic, retain) NSNumber * isStoredOnDevice;
@property (nonatomic, retain) NSNumber * isUploadFailed;
@property (nonatomic, retain) NSString * keyString;
@property (nonatomic, retain) NSString * messageText;
@property (nonatomic, retain) NSString * suUserKeyString;
@property (nonatomic, retain) NSString * to;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSNumber * inProgress;
@property (nonatomic, retain) DB_FileMetaInfo *fileMetaInfo;

@end
