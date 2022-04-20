#import <Cocoa/Cocoa.h>

extern void HandleURL(char*);

@interface GoPasser : NSObject
+ (void)handleGetURLEvent:(NSAppleEventDescriptor *)event;
@end

void StartURLHandler(void);
