//
//  CPTestApp_iPhoneAppDelegate.h
//  CPTestApp-iPhone
//
//  Toolbar icons in the application are courtesy of Joseph Wain / glyphish.com
//  See the license file in the GlyphishIcons directory for more information on these icons

#import <UIKit/UIKit.h>

@interface CPTestApp_iPhoneAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
