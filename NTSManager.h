#import <UIKit/UIKit.h>

@class NTSNote, NTSWindow;

@interface NTSManager : NSObject

@property (nonatomic, retain) UIView *notesView;
@property (nonatomic, retain) UILabel *addLabel;
@property (nonatomic, retain) NSMutableArray<NTSNote *> *notes;
@property (nonatomic, retain) NTSWindow *window;
@property (nonatomic) BOOL windowVisible;
@property (nonatomic) BOOL useCustomTextSize;
@property (nonatomic) NSInteger textSize;
@property (nonatomic) NSInteger textAlignment;
@property (nonatomic) NSInteger colorStyle;

+ (instancetype)sharedInstance;
- (id)init;
- (void)loadView;
- (void)addNote:(NTSNote *)note;
- (void)removeNote:(NTSNote *)note;
- (void)createNote:(UILongPressGestureRecognizer *)sender;
- (void)loadNotes;
- (void)updateNotes;
- (void)toggleNotesShown;
- (void)showNotes;
- (void)hideNotes;

@end