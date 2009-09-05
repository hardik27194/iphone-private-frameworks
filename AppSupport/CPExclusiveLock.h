/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

/*!
 
 CPExclusiveLock provides system-wise locking through temporary files. You use CPExclusiveLock like any other NSLocks, e.g.
 
 @code
 CPExclusiveLock* syslock = [[CPExclusiveLock alloc] initWithName:@"MyExclusiveLock"];
 [syslock lock];
 [device doOperation:1 :2 :3 :4];
 [syslock unlock];
 @endcode
 
 A CPExclusiveLock will create a temporary file in ~/Library/Caches. If the name is given, it will be used as the filename.
 When the lock is acquired, the object will open the temporary file with  O_NONBLOCK|O_EXLOCK|O_CREAT mode.
 
 */

#import "NSLocking.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
	int _fd;
	NSString* _name;
}
// inherited: -(id)init;
-(id)initWithName:(NSString*)name;
// inherited: -(void)dealloc;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
-(void)setName:(NSString*)name;
-(NSString*)name;
@end

