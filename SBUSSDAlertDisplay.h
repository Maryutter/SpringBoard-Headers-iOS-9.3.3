
#import "SBAlertView.h"

#import "UITextFieldDelegate.h"

@class NSString, TPButton, UIActivityIndicatorView, UITextField, UITextView, UIView;

@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate>
{
    TPButton *_dismissButton;
    TPButton *_replyButton;
    UIView *_notifyView;
    UIView *_replyView;
    UITextView *_charsRemainingView;
    UIActivityIndicatorView *_progressIndicator;
    UITextField *_responseField;
    UITextView *_textView;
    UITextView *_responseMessageView;
    _Bool _allowsResponse;
}

- (void)_cancelClicked;
- (void)_okayClicked;
- (void)_replyClicked;
- (void)_textChanged:(id)arg1;
- (void)_updateCharsRemaining;
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)setAllowsResponse:(_Bool)arg1;
- (_Bool)allowsResponse;
- (void)alertStringAvailable:(id)arg1;
- (void)_setupResponseBar;
- (void)layoutSubviews;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)displayString:(id)arg1;
- (void)_centerTextView:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_responseMessageView;
- (id)_textView;
- (id)_charsRemainingView;
- (void)dealloc;
- (id)_replyView;
- (id)_notifyView;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

