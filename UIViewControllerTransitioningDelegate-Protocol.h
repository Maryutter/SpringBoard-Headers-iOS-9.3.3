
#import "NSObject.h"

@class UIPresentationController, UIViewController;

@protocol UIViewControllerTransitioningDelegate <NSObject>

@optional
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3;
@end

