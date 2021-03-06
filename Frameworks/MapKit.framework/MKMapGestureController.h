/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKMapGestureControllerDelegate>, MKBasicMapView, MKTiltGestureRecognizer, MKVariableDelayTapRecognizer, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, _MKUserInteractionGestureRecognizer, _UIDynamicAnimationGroup, _UIDynamicValueAnimation;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, UIGestureRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver> {
    <MKMapGestureControllerDelegate> *_delegate;
    BOOL _didStartLongPress;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    int _gestureCount;
    double _lastScale;
    MKBasicMapView *_mapView;
    _UIDynamicAnimationGroup *_panDecelerationAnimationGroup;
    UIPanGestureRecognizer *_panGestureRecognizer;
    BOOL _panWithMomentum;
    _UIDynamicValueAnimation *_pinchDecelerationAnimation;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    _UIDynamicValueAnimation *_rotationDecelerationAnimation;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    _UIDynamicValueAnimation *_tiltDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
}

@property(copy,readonly) NSString * debugDescription;
@property <MKMapGestureControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;
@property(readonly) unsigned int hash;
@property(readonly) MKBasicMapView * mapView;
@property(readonly) UIPanGestureRecognizer * panGestureRecognizer;
@property BOOL panWithMomentum;
@property(readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property(getter=isRotationEnabled) BOOL rotationEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(readonly) Class superclass;
@property(getter=isTiltEnabled) BOOL tiltEnabled;
@property(readonly) UILongPressGestureRecognizer * twoFingerLongPressGestureRecognizer;
@property(readonly) UITapGestureRecognizer * twoFingerTapGestureRecognizer;
@property(getter=isZoomEnabled) BOOL zoomEnabled;

- (void).cxx_destruct;
- (void)_clearGesture:(id)arg1;
- (struct CGPoint { float x1; float x2; })_snapPointToDevicePixels:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginGesturing;
- (void)clearGestureRecognizersInFlight;
- (void)dealloc;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (void)endGesturing;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerTouchesBegan:(id)arg1;
- (void)gestureRecognizerTouchesCanceled:(id)arg1;
- (void)gestureRecognizerTouchesEnded:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (void)handleTouch:(id)arg1;
- (void)handleTwoFingerLongPress:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (BOOL)isRotationEnabled;
- (BOOL)isScrollEnabled;
- (BOOL)isTiltEnabled;
- (BOOL)isZoomEnabled;
- (id)mapView;
- (id)panGestureRecognizer;
- (BOOL)panWithMomentum;
- (id)pinchGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setPanWithMomentum:(BOOL)arg1;
- (void)setRotationEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setTiltEnabled:(BOOL)arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)startUserInteractionFromExternalGesture;
- (void)stopDynamicAnimations;
- (void)stopUserInteractionFromExternalGesture;
- (id)twoFingerLongPressGestureRecognizer;
- (id)twoFingerTapGestureRecognizer;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;

@end
