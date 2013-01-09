#import <UIKit/UIKit.h>

@interface AlphaTransparencyViewController : UIViewController {
    IBOutlet UILabel *text1;
    IBOutlet UILabel *text2;
}

@property (nonatomic,retain) UILabel *text1;
@property (nonatomic, retain) UILabel *text2;

-(IBAction) eat; 

@end
