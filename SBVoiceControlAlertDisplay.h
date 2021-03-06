
#import "SBAlertView.h"

#import "SUICFlamesViewDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"
#import "VSRecognitionSessionDelegate.h"
#import "VSSpeechSynthesizerDelegate.h"

@class AVController, NSDictionary, NSString, SUICFlamesView, SiriUISuggestionsView, UILabel, UIView, VSRecognitionSession, _UIBackdropView;

@interface SBVoiceControlAlertDisplay : SBAlertView <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate, SUICFlamesViewDelegate, SiriUISuggestionsViewDelegate>
{
    VSRecognitionSession *_session;
    _Bool _wasRecognizing;
    _Bool _didConfigureRouting;
    _UIBackdropView *_backdrop;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SUICFlamesView *_flamesView;
    SiriUISuggestionsView *_suggestionsView;
    AVController *_avController;
    long long _keywordCount;
    long long _startingKeywordIndex;
    NSDictionary *_locStrings;
    _Bool _didDismiss;
    _Bool _awaitingButtonRelease;
    _Bool _isBecomingVisible;
    id _postSoundBlock;
}

- (float)audioLevelForFlamesView:(id)arg1;
- (id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)_keywordsChanged;
- (void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
- (void)_speakText:(id)arg1;
- (void)_speakFeedbackText;
- (void)_performConfirmationAction;
- (void)_continueWithRecognitionAction;
- (id)recognitionSession:(id)arg1 openURL:(id)arg2;
- (id)_openVideoURL:(id)arg1;
- (id)_openTelURL:(id)arg1;
- (id)_openURLCore:(id)arg1;
- (void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
- (void)_mediaPlayerDied;
- (void)_performNoMatchFound;
- (void)recognitionSessionDidBeginAction:(id)arg1;
- (void)_continueRecognitionAction;
- (_Bool)recognitionSessionWillBeginAction:(id)arg1;
- (void)_resetSession;
- (void)_startSession;
- (void)_playSound:(unsigned int)arg1 synchronously:(_Bool)arg2;
- (_Bool)_attemptPlaySound:(unsigned int)arg1 synchronously:(_Bool)arg2;
- (void)_performSoundCompletionAction;
- (void)_configureRoutingIfNecessary;
- (void)_pickedRouteChanged:(id)arg1;
- (id)_desiredRouteDictionary;
- (void)handleHeadsetButtonUpFromActivation:(_Bool)arg1;
- (void)handleButtonUpCancel;
- (void)_dismissSlightlyLater;
- (void)dismiss;
- (void)_invalidateRouting;
- (void)alertWillBeDismissed;
- (void)alertDisplayWillBecomeVisible;
- (void)_setFeedbackVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (_Bool)alphanumericKeyboard;
- (void)dealloc;
- (_Bool)_wasTriggeredByMenu;
- (double)_subtitleBaseline;
- (double)_titleBaseline;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

