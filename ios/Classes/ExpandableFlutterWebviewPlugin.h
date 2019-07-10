#import <Flutter/Flutter.h>
#import <WebKit/WebKit.h>

static FlutterMethodChannel *channel;

@interface ExpandableFlutterWebviewPlugin : NSObject<FlutterPlugin>
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, retain) WKWebView *webview;
@end
