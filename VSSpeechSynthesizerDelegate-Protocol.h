
#import "NSObject.h"

@class NSError, NSString, VSSpeechRequest, VSSpeechSynthesizer;

@protocol VSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(VSSpeechRequest *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(_Bool)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2;
- (void)speechSynthesizerDidContinueSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizerDidPauseSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeaking:(_Bool)arg2 phonemesSpoken:(NSString *)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeaking:(_Bool)arg2 withError:(NSError *)arg3;
- (void)speechSynthesizerDidStartSpeaking:(VSSpeechSynthesizer *)arg1;
@end

